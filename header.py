""" Header Module """

import numpy as np
import os

import inside

PATH_DATA_DB = "game.db"

PLAYER_CLASSES = ("Warrior", "Roge", "Mage")
QUANTITY_PLAYER_CLASSES = len(PLAYER_CLASSES)

DEFAULT_MP = 10
DEFAULT_HP = 10

CLASSES_BONUSES = {
    'Warrior': {
        'hp': 5,
        'mp': 0,
        'str': 5,
        'dex': 1,
        'con': 1,
        'inte': 1,
        'wis': 1,
        'chа': 1

    },
    'Roge': {
        'hp': 4,
        'mp': 1,
        'str': 1,
        'dex': 5,
        'con': 1,
        'inte': 1,
        'wis': 1,
        'cha': 1
    },
    'Mage': {
        'hp': 2,
        'mp': 5,
        'str': 1,
        'dex': 1,
        'con': 1,
        'inte': 1,
        'wis': 5,
        'cha': 1
    }
}

STRART_INVENTORY = {
    'Warrior': {
        'inventory': 'sword'
    },
    'Roge': {
        'inventory': 'blade'
    },
    'Mage': {
        'inventory': 'scepter'
    }
}

CLASSES_ABILITY = {
    'Warrior': {
        'str': np.random.randint(4, 10),
        'dex': np.random.randint(2, 5),
        'con': np.random.randint(4, 9),
        'inte': np.random.randint(1, 3),
        'wis': np.random.randint(1, 3),
        'cha': np.random.randint(2, 5)
    },
    'Roge': {
        'str': np.random.randint(4, 7),
        'dex': np.random.randint(4, 9),
        'con': np.random.randint(3, 5),
        'inte': np.random.randint(1, 4),
        'wis': np.random.randint(1, 4),
        'cha': np.random.randint(2, 5)
    },
    'Mage': {
        'str': np.random.randint(2, 6),
        'dex': np.random.randint(2, 5),
        'con': np.random.randint(2, 5),
        'inte': np.random.randint(5, 10),
        'wis': np.random.randint(5, 10),
        'cha': np.random.randint(2, 6)
    }
}


CONVENTIONAL_NOTATIONAL = {
    "H": "Home",
    "S": "Shop",
    "B": "Bar",
    "M": "Mountain",
    "C": "Cave",
    "f": "Field",
    "F": "Forest",
    "R": "River",
    "b": "little Bridge",
    "p": "Player spawn",
    " ": "***Wind***",
    "V": "Village"
}

CONVENTIONAL_NOTATIONAL_ENTER_POINT = ["V"]

NAME_MAPS_FILES = {
    "V": "village"
}

CONVENTIONAL_NOTATIONAL_WITHOUT_DETAIL = [
    "H", "S", "B", "M", "C", "f", "F", "R", "b", "V"]

CONVENTIONAL_NOTATIONAL_VILLAGE = [
    "H", "S", " "]

DEFAULT_PLAYER_X = 0
DEFAULT_PLAYER_Y = 0

DEFAULT_WEIGHT_MAP = 100
DEFAULT_HEIGHT_MAP = 100

# Village min 10x20

DEFAULT_WEIGHT_MAP_VILLAGE = 20
DEFAULT_HEIGHT_MAP_VILLAGE = 10

DEFAULT_QUANTITY_MAP_STRING = DEFAULT_HEIGHT_MAP
DEFAULT_QUANTITY_MAP_STRING_VILLAGE = DEFAULT_HEIGHT_MAP_VILLAGE
