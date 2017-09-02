""" Header Module """

PLAYER_CLASSES = ("Warrior", "Roge", "Mage")
QUANTITY_PLAYER_CLASSES = len(PLAYER_CLASSES)


TABLES_CREATE_COMMANDS = {
    'lands': "CREATE TABLE `lands` (`name` TEXT NOT NULL UNIQUE,`entry_point` TEXT NOT NULL UNIQUE);",
    'players': "CREATE TABLE `players` ( `hash`	TEXT NOT NULL UNIQUE, `name` TEXT NOT NULL, `age` TEXT NOT NULL, `class` TEXT NOT NULL,	PRIMARY KEY(`hash`));"
}

#DB_MD5_ETALON = "5b20a543c3b19c3dc9355b93f71308da"
