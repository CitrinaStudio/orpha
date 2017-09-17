""" Player functions module """

# Проверка существования модулей:

try:
    import sqlite3 as sqlite
    import string
    import json

    import header
    import inside

    from header import DB
    from header import CONNECT

except ImportError as err_detail:
    inside.log.logging.critical('Ошибка импорта.')
    inside.log.logging.critical('Модуль %s не найден!' %
                                str(err_detail).split(": ")[0])
    exit(1)

else:
    inside.log.logging.info('Импорт дополнительных модулей прошел успешно.')



def _intput_check_error(err_msg, input_msg):
    """Проверка введенного занчения"""

    try:
        var = int(input(input_msg))

    except ValueError:

        inside.util.cprint(err_msg, "red")

        while_exit = 0  # Для того, чтобы выйти из цикла, токо тогда, когда не словим исключение

        while while_exit != 1:
            try:
                var = int(input(input_msg))

            except ValueError:
                inside.util.cprint(err_msg, "red")

            else:
                while_exit = 1

    return var


def new_player():
    """Создание и запись нового персонажа"""

    player_name = input("Input name: ")

    print("Please, choice your class: \n\n")

    for i in range(0, header.QUANTITY_PLAYER_CLASSES, 1):
        # Вывод списка классов
        print("№" + str(i + 1) + " " + header.PLAYER_CLASSES[i])

    player_class = string.capwords(input("\nInput your class: "))

    while_exit = 0  # Для того, чтобы выйти из цикла, токо тогда, когда не словим исключение

    # Проверка существования класса
    if player_class not in header.PLAYER_CLASSES:

        while while_exit != 1:
            inside.util.cprint(
                "Sorry, but you input invalid class. Try again.", "red")

            print("Please, choice your class: \n")

            for i in range(0, header.QUANTITY_PLAYER_CLASSES, 1):
                # Вывод списка классов
                print("№" + str(i + 1) + " " + header.PLAYER_CLASSES[i])

            player_class = string.capwords(input("\nInput your class: "))

            if player_class in header.PLAYER_CLASSES:
                while_exit = 1

    player_age = _intput_check_error(
        "Sorry, but you input invalid age. Please, try again.", "Input age: ")

    player_hash = inside.gen.gen_crc32_hash(
        (player_name, player_class, player_age))

    # Попытка записи в БД и проверка существования идентичного персонажа
    try:
        DB.execute("""INSERT INTO players (hash, name, age, class, coor, hp, mp, str, dex, con, inte, wis, cha)
                        VALUES ('%s', '%s', %s, '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s')""" % (
            player_hash, player_name, player_age, player_class,
            str((header.DEFAULT_PLAYER_X, header.DEFAULT_PLAYER_Y)),
            header.DEFAULT_HP + header.CLASSES_BONUSES[player_class]['hp'],
            header.DEFAULT_MP + header.CLASSES_BONUSES[player_class]['mp'],
            header.CLASSES_ABILITY[player_class]['str'] +
            header.CLASSES_BONUSES[player_class]['str'],
            header.CLASSES_ABILITY[player_class]['dex'] +
            header.CLASSES_BONUSES[player_class]['dex'],
            header.CLASSES_ABILITY[player_class]['con'] +
            header.CLASSES_BONUSES[player_class]['con'],
            header.CLASSES_ABILITY[player_class]['inte'] +
            header.CLASSES_BONUSES[player_class]['inte'],
            header.CLASSES_ABILITY[player_class]['wis'] +
            header.CLASSES_BONUSES[player_class]['wis'],
            header.CLASSES_ABILITY[player_class]['cha'] + 
            header.CLASSES_BONUSES[player_class]['cha']))

    except sqlite.IntegrityError as err_detail:
        if "UNIQUE" in str(err_detail):
            inside.util.cprint("Error!!! Player exist! Try again!", "red")
            exit(1)
    else:
        CONNECT.commit()

# def change_params():
    #'''Функция изменения параметров игрока'''
