import os
import sqlite3 as sqlite

from colorama import Back, Fore, Style, init

import header
import inside

import sqlite3 as sqlite

CONNECT = sqlite.connect("game.db")
DB = CONNECT.cursor()


init()

def cprint(msg, foreground = "black", background = "white"): #Функция вывода цветного текста для ошибок
    fground = foreground.upper()
    bground = background.upper()
    style = getattr(Fore, fground) + getattr(Back, bground)
    print(style + msg + Style.RESET_ALL)


def clear(): #Очищение командной строки
    os.system('cls' if os.name=='nt' else 'clear')

def db_check():
    """Проверка существования таблиц"""

    check_table_ok = 0

    while check_table_ok != 1:
        try:
            DB.execute("SELECT * FROM players")
            DB.execute("SELECT * FROM lands")
            DB.execute("SELECT * FROM bars")
            DB.execute("SELECT * FROM homes")
            DB.execute("SELECT * FROM rivers")
            DB.execute("SELECT * FROM shops")
            DB.execute("SELECT * FROM mountains")
            DB.execute("SELECT * FROM caves")
            DB.execute("SELECT * FROM fields")
            DB.execute("SELECT * FROM forests")
            DB.execute("SELECT * FROM briges")

        except sqlite.OperationalError as err_detail:

            table_name = str(err_detail).split(": ")[1]

            inside.log.logging.error("Структра БД повреждена!")
            inside.log.logging.error("Таблица %s не найдена!" % table_name)
            DB.execute(header.TABLES_CREATE_COMMANDS[table_name])

            inside.log.logging.info("Таблица %s успешно создана" % table_name)

        else:
            inside.log.logging.info("С БД всё хорошо!")
            check_table_ok = 1
