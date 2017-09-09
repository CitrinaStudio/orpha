from colorama import init, Fore, Back, Style


import os

import sqlite3 as sqlite

import inside

import header

init()

def cprint(msg, foreground = "black", background = "white"): #Функция вывода цветного текста для ошибок
    fground = foreground.upper()
    bground = background.upper()
    style = getattr(Fore, fground) + getattr(Back, bground)
    print(style + msg + Style.RESET_ALL)

import os

def clear(): #Очищение командной строки
    os.system('cls' if os.name=='nt' else 'clear')

def db_check():  #Проверка базы данных
    
    CONNECT = sqlite.connect("game.db")
    DB = CONNECT.cursor()

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
