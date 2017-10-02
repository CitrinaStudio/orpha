""" Header Module """

import os

import numpy as np
import smarkov
from tinydb import Query, TinyDB

MAPS_PATH = "maps/%s"
M_P = "maps/"
TUTORIAL_MAP = "maps/tutorial/%s"


TDB = TinyDB("game.json")


PATH_DATA_DB = os.path.join(os.path.dirname(__file__), "db/")

PLAYER_CLASSES = ["Mage"]
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

START_INVENTORY = {
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
        'hp': np.random.randint(2, 6),
        'mp': np.random.randint(5, 10),
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
    "V": "Village",
    "Ć": "Temple",
    "p": "Player Spawn",
    "E": "Enemy",
    "#": "Wall"
}

CONVENTIONAL_NOTATIONAL_ENTER_POINT = ["V"]

NAME_MAPS_FILES = {
    "V": "village",
    "E": "enemy"
}


CONVENTIONAL_NOTATIONAL_TABLES_NAMES = {
    "H": "homes",
    "S": "shops",
    "B": "bars",
    "M": "mountains",
    "R": "rivers",
    "V": "villages",
    "E": "enemyes",
    "D": "dungeons",
    "Ć": "temples"

}

POTENTIAL_ENEMY_STATS = {
    'Ork': {
        'hp': np.random.randint(18, 20),
        'mp': np.random.randint(3, 7)
    },
    'Gnom': {
        'hp': np.random.randint(10, 20),
        'mp': np.random.randint(7, 10)
    }
}


MAGIC_MBOSS_SPELLS = [
    'Meteor', 'Ice walk'
]

MAGIC_SPELLS = {  # DEFAULT PLAYER SPELLS
    'Iceblast': {"damage_bonus": np.random.randint(3, 5), "spell_cost": 5, "min_player_coeff": .0, "category": "Ice"},
    'Fireball': {"damage_bonus": np.random.randint(4, 6), "spell_cost": 6, "min_player_coeff": .0, "category": "Fire"},
    'Waterpillar': {"damage_bonus": np.random.randint(4, 7), "spell_cost": 7, "min_player_coeff": .0, "category": "Water"},
    'Ironfist': {"damage_bonus": np.random.randint(5, 11), "spell_cost": 9, "min_player_coeff": .0, "category": "Iron"}
}


BODY_PARTS = [
    'leg', 'had', 'hand', 'neck', 'knee'
]

MAGIC_DAMAGE_DETAIL = {
    'Iceblast': 'You froze his %s',
    'Fireball': 'You burn his %s',
    'Ironfist': "You held down the enemy\'s %s.",
    'Waterpillar': "You wet enemy\'s %s."
}


MAGIC_SPELLS_NAMES = list(MAGIC_SPELLS.keys())

POTENTIAL_ENEMY_LIST = list(POTENTIAL_ENEMY_STATS.keys())

POTENTIAL_MBOSS_PREFIX_STATS = {
    "Ice": (np.random.randint(3, 5), np.random.randint(3, 15)),
    "Fire": (np.random.randint(4, 6), np.random.randint(4, 13)),
    "Water": (np.random.randint(3, 4), np.random.randint(5, 14)),
    "Magma": (np.random.randint(5, 6), np.random.randint(3, 15)),
    "Earth": (np.random.randint(3, 4), np.random.randint(6, 15))
}

POTENTIAL_MBOSS_PREFIX_LIST = list(POTENTIAL_MBOSS_PREFIX_STATS.keys())

CONVENTIONAL_NOTATIONAL_WITHOUT_DETAIL = list(CONVENTIONAL_NOTATIONAL.keys())

CONVENTIONAL_NOTATIONAL_VILLAGE = [
    "H", "S", " "]

DEFAULT_PLAYER_X = 0
DEFAULT_PLAYER_Y = 0

DEFAULT_WEIGHT_MAP = 50
DEFAULT_HEIGHT_MAP = 20

# Village min 10x20

DEFAULT_WEIGHT_MAP_VILLAGE = 20
DEFAULT_HEIGHT_MAP_VILLAGE = 10

DEFAULT_QUANTITY_MAP_STRING = DEFAULT_HEIGHT_MAP
DEFAULT_QUANTITY_MAP_STRING_VILLAGE = DEFAULT_HEIGHT_MAP_VILLAGE

DUNGEON_PREFIX = smarkov.Markov([
    'Dark', 'Little', 'Singular', 'Blood', 'Frozen', 'Ice', 'Fire', 'Dead', 'Vampire', 'Wolf', 'Fucking', 'Gay'
])

DUNGEON_TYPE = [
    ' castle', ' gates', ' house', ' house'
]


DUNGEON_SUFFIX = smarkov.Markov([
    'Ilya', 'Dionis', 'Leena', 'Lanaya', 'Raxar', 'Lisa Su'
])
