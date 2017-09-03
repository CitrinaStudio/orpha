""" Header Module """

PLAYER_CLASSES = ("Warrior", "Roge", "Mage")
QUANTITY_PLAYER_CLASSES = len(PLAYER_CLASSES)
DEFAULT_MP = 10
DEFAULT_HP = 10
CLASSES_BONUSES = {
    'Warrior': {
        'hp': 5, 
        'mp': 0
    }, 
    'Roge': {
        'hp': 4,
        'mp': 1
    },
    'Mage': {
        'hp': 2,
        'mp': 5
    }
}

TABLES_CREATE_COMMANDS = {
    'lands': "CREATE TABLE `lands` (`name` TEXT NOT NULL UNIQUE,`entry_point` TEXT NOT NULL UNIQUE);",
    'players': "CREATE TABLE `players` ( `hash`	TEXT NOT NULL UNIQUE, `name` TEXT UNIQUE NOT NULL, `age` INTEGER NOT NULL, `class` TEXT NOT NULL,	`coor` TEXT NOT NULL, `hp` TEXT NOT NULL, `mp` TEXT NOT NULL,  PRIMARY KEY(`hash`));"
}

#DB_MD5_ETALON = "5b20a543c3b19c3dc9355b93f71308da"

DEFAULT_PLAYER_X = 1
DEFAULT_PLAYER_Y = 1
