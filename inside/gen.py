""" Module of generation """

import hashlib
import random
import string
import zlib

from numpy import random as nprand

import header


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

    player_spawn = 0

    map_strings = ""

    map_strings += "#" * header.DEFAULT_WEIGHT_MAP + "\n"

    for _ in range(0, header.DEFAULT_QUANTITY_MAP_STRING - 2, 1):
        map_strings += "#"

        for _ in range(0, header.DEFAULT_WEIGHT_MAP - 2, 1):
            map_natation = nprand.choice(
                header.CONVENTIONAL_NOTATIONAL_WITHOUT_DETAIL)
            
            if random.random() > 0.7:
                map_strings += map_natation

            else:
                map_strings += " "

        map_strings += "#\n"

    map_strings += "#" * header.DEFAULT_WEIGHT_MAP + "\n"

    random_spawn_point = nprand.randint(0, header.DEFAULT_WEIGHT_MAP * header.DEFAULT_HEIGHT_MAP)
    valid_spawn_point = 0

    while valid_spawn_point != 1:
        if map_strings[random_spawn_point] == "#":
                random_spawn_point = nprand.randint(0, header.DEFAULT_WEIGHT_MAP * header.DEFAULT_HEIGHT_MAP)

        else:
            map_strings = map_strings[:random_spawn_point] + \
                "p" + map_strings[random_spawn_point + 1:]
            valid_spawn_point = 1

    gamemap.write(map_strings)


def gen_detail_map(map_arr):
    
    for y in range(0, len(map_arr), 1):

        for x in range(0, len(map_arr[y]), 1):
            if map_arr[x][y] != "p" and map_arr[x][y] != "#":
                print(True)
            
def gen_village():
    
    name = gen_name(64)
    
    gamemap = open("inside/maps/%s" % name, "w")
    
    map_strings = ""

    map_strings += "#" * header.DEFAULT_WEIGHT_MAP_VILLAGE + "\n"


    for _ in range(0, header.DEFAULT_QUANTITY_MAP_STRING_VILLAGE - 2, 1):
        map_strings += "#"

        for x in range(0, header.DEFAULT_WEIGHT_MAP_VILLAGE - 2, 1):
            
            map_natation = nprand.choice(
                header.CONVENTIONAL_NOTATIONAL_VILLAGE)

            if map_natation == "H" and random.random() > 0.76:
                map_strings += map_natation

            elif map_natation == "S" and random.random() > 0.923:
                map_strings += map_natation 
                    

            else:
                map_strings += " "

        map_strings += "#\n"

    map_strings += "#" * header.DEFAULT_WEIGHT_MAP_VILLAGE + "\n"

    random_spawn_point = nprand.randint(0, header.DEFAULT_HEIGHT_MAP_VILLAGE * header.DEFAULT_WEIGHT_MAP_VILLAGE)
    valid_spawn_point = 0

    while valid_spawn_point != 1:
        if map_strings[random_spawn_point] == "#":
                random_spawn_point = nprand.randint(0, header.DEFAULT_HEIGHT_MAP_VILLAGE * header.DEFAULT_WEIGHT_MAP_VILLAGE)

        else:
            map_strings = map_strings[:random_spawn_point] + \
                "p" + map_strings[random_spawn_point + 1:]
            valid_spawn_point = 1

    gamemap.write(map_strings)

    return name
