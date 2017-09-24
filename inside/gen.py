""" Module of generation """

import hashlib
import random
import string
import zlib

from numpy import random as nprand
from tinydb import TinyDB, Query

import header

TDB = TinyDB("game.json")  # TinyDB


def gen_adler32_hash(params):
    """ Генерация adler32 """

    return str(hex(zlib.adler32(str(params).encode("utf-8"))).split('x')[-1])


def gen_crc32_hash(params):
    """ Генерация crc32 """

    return str(hex(zlib.crc32(str(params).encode("utf-8"))).split('x')[-1])


def gen_md5_hash_file(file_name):
    """ Генерация md5 """

    return hashlib.md5(open(file_name, 'rb').read()).hexdigest()


def gen_name(size):
    """ Генерация строки(имени) """

    return string.capwords(''.join(random.choice(
        string.ascii_uppercase + string.digits) for _ in range(size)))


def gen_map(map_file="default_map"):
    """ Генерация карты """

    gamemap = open("inside/maps/%s" % map_file, "w")

    valid_spawn_point = 0

    map_strings = ""

    map_strings += "#" * header.DEFAULT_WEIGHT_MAP + "\n"

    for y in range(1, header.DEFAULT_QUANTITY_MAP_STRING - 2, 1):
        map_strings += "#"

        for x in range(1, header.DEFAULT_WEIGHT_MAP - 2, 1):
            map_notation = nprand.choice(
                header.CONVENTIONAL_NOTATIONAL_WITHOUT_DETAIL)

            if map_notation == "p" and valid_spawn_point != 1:
                valid_spawn_point = 1
                map_strings += map_notation

            elif map_notation == "p" and valid_spawn_point == 1:
                map_strings += " "

            elif map_notation == "D" and nprand.random() > 0.965:
                map_strings += map_notation

            elif map_notation == "Ć" and nprand.random() > 0.9:
                map_strings += map_notation
                temples = TDB.table(header.CONVENTIONAL_NOTATIONAL_TABLES_NAMES[map_notation])
                count_temples = Query()
                id = len(temples.all()) + 1
                print(id)
                temples.insert({"id": id, "coor": "%s, %s" % (x, y)})

            elif map_notation == "#":
                map_strings += " "

            elif map_notation != "D" and map_notation != "Ć" and nprand.random() > 0.7:
                map_strings += map_notation

            else:
                map_strings += " "

        map_strings += "#\n"

    map_strings += "#" * header.DEFAULT_WEIGHT_MAP + "\n"

    random_spawn_point = nprand.randint(0, header.DEFAULT_WEIGHT_MAP * header.DEFAULT_HEIGHT_MAP)

    while valid_spawn_point != 1:
        if map_strings[random_spawn_point] == "#":
            random_spawn_point = nprand.randint(
                0, header.DEFAULT_WEIGHT_MAP * header.DEFAULT_HEIGHT_MAP)

        else:
            map_strings = map_strings[:random_spawn_point] + \
                "p" + map_strings[random_spawn_point + 1:]
            valid_spawn_point = 1

    gamemap.write(map_strings)


def gen_village():

    name = gen_name(64)

    gamemap = open("inside/maps/%s" % name, "w")

    map_strings = ""

    map_strings += "#" * header.DEFAULT_WEIGHT_MAP_VILLAGE + "\n"

    for _ in range(0, header.DEFAULT_QUANTITY_MAP_STRING_VILLAGE - 2, 1):
        map_strings += "#"

        for x in range(0, header.DEFAULT_WEIGHT_MAP_VILLAGE - 2, 1):

            map_notation = nprand.choice(
                header.CONVENTIONAL_NOTATIONAL_VILLAGE)

            if map_notation == "H" and random.random() > 0.76:
                map_strings += map_notation

            elif map_notation == "S" and random.random() > 0.923:
                map_strings += map_notation

            else:
                map_strings += " "

        map_strings += "#\n"

    map_strings += "#" * header.DEFAULT_WEIGHT_MAP_VILLAGE + "\n"

    random_spawn_point = nprand.randint(
        0, header.DEFAULT_HEIGHT_MAP_VILLAGE * header.DEFAULT_WEIGHT_MAP_VILLAGE)
    valid_spawn_point = 0

    while valid_spawn_point != 1:
        if map_strings[random_spawn_point] == "#":
            random_spawn_point = nprand.randint(
                0, header.DEFAULT_HEIGHT_MAP_VILLAGE * header.DEFAULT_WEIGHT_MAP_VILLAGE)

        else:
            map_strings = map_strings[:random_spawn_point] + \
                "p" + map_strings[random_spawn_point + 1:]
            valid_spawn_point = 1

    gamemap.write(map_strings)

    return name


def gen_dungeon():

    dungeon_name = str(nprand.choice(header.DUNGEON_PREFIX) + nprand.choice(header.DUNGEON_TYPE)
                       ) + str(" of " + "".join(header.DUNGEON_SUFFIX.generate_text()))

    gamemap = open("inside/maps/%s" % gen_name(100), "w")

    print(dungeon_name)
