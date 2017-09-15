import os

from colorama import Back, Fore, Style, init

import header
import inside


init()


def cprint(msg, foreground="black", background="white"):  # Функция вывода цветного текста для ошибок
    fground = foreground.upper()
    bground = background.upper()
    style = getattr(Fore, fground) + getattr(Back, bground)
    print(style + msg + Style.RESET_ALL)


def clear():  # Очищение командной строки
    os.system('cls' if os.name == 'nt' else 'clear')
