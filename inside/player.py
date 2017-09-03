""" Player functions module """

# Проверка существования модулей:

try:
    import sqlite3 as sqlite
    import string
    import os

    import header
    import inside

except ImportError as err_detail:
    inside.log.logging.critical('Ошибка импорта.')
    inside.log.logging.critical('Модуль %s не найден!' %
                                str(err_detail).split(": ")[0])
    exit(1)

else:
    inside.log.logging.info('Импорт дополнительных модулей прошел успешно.')


# подключение к БД

CONNECT = sqlite.connect("game.db")
DB = CONNECT.cursor()


def db_check():
    # Проверка существования таблиц:

    check_table_ok = 0

    while check_table_ok != 1:
        try:
            DB.execute("SELECT * FROM players")
            DB.execute("SELECT * FROM lands")

        except sqlite.OperationalError as err_detail:

            table_name = str(err_detail).split(": ")[1]

            inside.log.logging.error("Структра БД повреждена!")
            inside.log.logging.error("Таблица %s не найдена!" % table_name)
            DB.execute(header.TABLES_CREATE_COMMANDS[table_name])

            inside.log.logging.info("Таблица %s успешно создана" % table_name)

        else:
            inside.log.logging.info("С БД всё хорошо!")
            check_table_ok = 1



def _intput_ckeck_error(err_msg, input_msg):
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

    # TODO: Масштабирование функции в release 0.3

    player_name = input("Input name: ")

    print("Please, choice your class: \n\n")

    for i in range(0, header.QUANTITY_PLAYER_CLASSES, 1):
        print("№" + str(i + 1) + " " + header.PLAYER_CLASSES[i]) #Вывод списка классов

    player_class = string.capwords(input("\nInput your class: "))

    while_exit = 0  # Для того, чтобы выйти из цикла, токо тогда, когда не словим исключение

    #Проверка существования класса
    if player_class not in header.PLAYER_CLASSES:
        
        while while_exit != 1:
            inside.util.cprint("Sorry, but you input invalid class. Try again.", "red")

            print("Please, choice your class: \n")

            for i in range(0, header.QUANTITY_PLAYER_CLASSES, 1):
                print("№" + str(i + 1) + " " + header.PLAYER_CLASSES[i]) #Вывод списка классов

            player_class = string.capwords(input("\nInput your class: "))

            if player_class in header.PLAYER_CLASSES:
                while_exit = 1

    player_age = _intput_ckeck_error(
        "Sorry, but you input invalid age. Please, try again.", "Input age: ")

    player_hash = inside.gen.gen_crc32_hash(
        (player_name, player_class, player_age))

    #Попытка записи в БД и проверка существования идентичного персонажа
    try:
        DB.execute("INSERT INTO players (hash, name, age, class, coor, hp, mp) VALUES ('%s', '%s', %s, '%s', '%s', '%s', '%s')" % (
            player_hash, player_name, player_age, player_class, str((header.DEFAULT_PLAYER_X, header.DEFAULT_PLAYER_Y)), header.DEFAULT_HP + header.CLASSES_BONUSES[player_class]['hp'], header.DEFAULT_MP + header.CLASSES_BONUSES[player_class]['mp']))

    except sqlite.IntegrityError as err_detail:
        if "UNIQUE" in str(err_detail):
            inside.util.cprint("Error!!! Player exist! Try again!", "red")
            exit(1)
    #inside.log.logging.info("Персонаж создан!")
    CONNECT.commit()
    #inside.log.logging.info("Персонаж записан в БД!")
