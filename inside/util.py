from colorama import init, Fore, Back, Style


import os

init()

def cprint(msg, foreground = "black", background = "white"):
    fground = foreground.upper()
    bground = background.upper()
    style = getattr(Fore, fground) + getattr(Back, bground)
    print(style + msg + Style.RESET_ALL)

import os

def clear():
    os.system('cls' if os.name=='nt' else 'clear')
