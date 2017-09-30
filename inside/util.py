import os

from colorama import Back, Fore, Style, init

import header
from numpy import random as nprand

import math


init()
# Функция вывода цветного текста для ошибок
def cprint(msg, foreground="black", background="white"):
    fground = foreground.upper()
    bground = background.upper()
    style = getattr(Fore, fground) + getattr(Back, bground)
    print(style + msg + Style.RESET_ALL)


def clear():  # Очищение командной строки
    os.system('cls' if os.name == 'nt' else 'clear')


def get_spell_effect(spell, enemy_danger_coeff):
    enemy_danger_coeff = math.fabs(enemy_danger_coeff)

    if header.MAGIC_SPELLS[spell]["category"] == "Ice":
        count_block_action = math.ceil(
            math.e * nprand.random() * math.sqrt(enemy_danger_coeff))
        print("You block enemy action in %s moves." % count_block_action)
        return ["block_enemy_action", count_block_action]

    if header.MAGIC_SPELLS[spell]["category"] == "Iron":
        count_block_action = math.ceil(
            math.e * nprand.random() * math.sqrt(enemy_danger_coeff))
        print("You block enemy action in %s moves." % count_block_action)
        return ["block_enemy_action", count_block_action]

    else:
        return ("", 0)
