""" Header Module """

import numpy as np

import inside

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

CLASSES_ABILITY = {
    'Warrior':{
        'str': np.random.randint(4,10),
        'dex': np.random.randint(2,5),
        'con': np.random.randint(4,9),
        'inte': np.random.randint(1,3),
        'wis': np.random.randint(1,3),
        'cha': np.random.randint(2,5)
    },
    'Roge':{
        'str': np.random.randint(4,7),
        'dex': np.random.randint(4,9),
        'con': np.random.randint(3,5),
        'inte': np.random.randint(1,4),
        'wis': np.random.randint(1,4), 
        'cha': np.random.randint(2,5)
    },
    'Mage':{
        'str': np.random.randint(2,6),
        'dex': np.random.randint(2,5),
        'con': np.random.randint(2,5),
        'inte': np.random.randint(5,10),
        'wis': np.random.randint(5,10),
        'cha': np.random.randint(2,6) 
    }
}

TABLES_CREATE_COMMANDS = {
    'lands': "CREATE TABLE `lands` (`name` TEXT NOT NULL UNIQUE,`entry_point` TEXT NOT NULL UNIQUE);",
    'players': "CREATE TABLE `players` ( `hash`	TEXT NOT NULL UNIQUE, `name` TEXT UNIQUE NOT NULL, `age` INTEGER NOT NULL, `class` TEXT NOT NULL,	`coor` TEXT NOT NULL, `hp` TEXT NOT NULL, `mp` TEXT NOT NULL, `str` INTEGER NOT NULL, `dex` INTEGER NOT NULL, `con` INTEGER NOT NULL, `inte` INTEGER NOT NULL, `wis` INTEGER NOT NULL,  `cha` INTEGER NOT NULL, PRIMARY KEY(`hash`));",
    'bars': "CREATE TABLE `bars` (`coor_hash` TEXT NOT NULL UNIQUE,	`name` TEXT NOT NULL, `detail` TEXT, PRIMARY KEY(`coor_hash`));",
    'homes': "CREATE TABLE `homes` (`coor_hash`	TEXT NOT NULL UNIQUE, `detail` TEXT, PRIMARY KEY(`coor_hash`));",
    'rivers': "CREATE TABLE `rivers` (`coor_hash` TEXT NOT NULL UNIQUE,`name` TEXT NOT NULL, PRIMARY KEY(`coor_hash`));",
    'shops': "CREATE TABLE `shops` (`coor_hash` TEXT NOT NULL UNIQUE, `name` TEXT NOT NULL, `detail` TEXT NOT NULL, PRIMARY KEY(`coor_hash`));",
    'mountains': "CREATE TABLE `mountains` (`coor_hash` TEXT NOT NULL UNIQUE,`detail` TEXT NOT NULL, PRIMARY KEY(`coor_hash`));",
    'caves': "CREATE TABLE `caves` (`coor_hash` TEXT NOT NULL UNIQUE,`detail` TEXT NOT NULL, PRIMARY KEY(`coor_hash`));",
    'fields': "CREATE TABLE `fields` (`coor_hash` TEXT NOT NULL UNIQUE,`detail` TEXT NOT NULL, PRIMARY KEY(`coor_hash`));",
    'forests': "CREATE TABLE `forests` (`coor_hash` TEXT NOT NULL UNIQUE,`detail` TEXT NOT NULL, PRIMARY KEY(`coor_hash`));"
    
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
    "p": "Player spawn"
}

CONVENTIONAL_NOTATIONAL_TABLES_NAMES = {
    "H": "homes",
    "S": "shops",
    "B": "bars",
    "M": "mountains",
    "C": "caves",
    "f": "fields",
    "F": "forests",
    "R": "rivers",
    "V": "villages"

}

CONVENTIONAL_NOTATIONAL_WITHOUT_DETAIL = ["H", "S", "B", "M", "C", "f", "F", "R", "b", "V"]


DEFAULT_PLAYER_X = 0
DEFAULT_PLAYER_Y = 0

DEFAULT_WEIGHT_MAP = 100
DEFAULT_HEIGHT_MAP = 100

DEFAULT_QUANTITY_MAP_STRING = DEFAULT_HEIGHT_MAP
