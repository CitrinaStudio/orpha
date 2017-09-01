""" Player functions module """

import sqlite3 as sqlite
import string

import numpy as np

import header
import inside

connect = sqlite.connect("game.db")
db = connect.cursor()


def _intput_ckeck_error(err_msg, input_msg):
    try:
        var = int(input(input_msg))

    except ValueError:
        # TODO: сделать нормальный вывод сообщений об ошибке

        print(err_msg)

        while_exit = 0  # Для того, чтобы выйти из цикла, токо тогда, когда не словим исключение

        while while_exit != 1:
            try:
                var = int(input(input_msg))

            except ValueError:
                print(err_msg)

            else:
                while_exit = 1

    return var


def new_player():
    player_name = input("Input name: ")

    print("Please, choice your class: \n\n")

    for i in range(0, header.QUANTITY_PLAYER_CLASSES, 1):
        print("№" + str(i + 1) + " " + header.PLAYER_CLASSES[i])

    player_class = string.capwords(input("\nInput your class: "))

    while_exit = 0  # Для того, чтобы выйти из цикла, токо тогда, когда не словим исключение
    if player_class not in header.PLAYER_CLASSES:
        while while_exit != 1:
            print("Sorry, but you input invalid class. Try again.")

            print("Please, choice your class: \n")

            for i in range(0, header.QUANTITY_PLAYER_CLASSES, 1):
                print("№" + str(i + 1) + " " + header.PLAYER_CLASSES[i])

            player_class = string.capwords(input("\nInput your class: "))

            if player_class in header.PLAYER_CLASSES:
                while_exit = 1

    player_age = _intput_ckeck_error(
        "Sorry, but you input invalid age. Please, try again.", "Input age: ")

    player_hash = inside.gen.gen_crc32_hash(
        (player_name, player_class, player_age))

    try:
        db.execute("INSERT INTO players (hash, name, age, class) VALUES ('%s', '%s', %s, '%s')" % (
            player_hash, player_name, player_age, player_class))

    except sqlite.IntegrityError:
        print("Error!!! Player exist! Try again!")
        exit(1)

    connect.commit()
