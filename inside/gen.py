""" Module of generation """

import hashlib
import random
import string
import time
import zlib

from numpy import random as nprand

import header


def gen_adler32_hash(params):
    return str(hex(zlib.adler32(str(params).encode("utf-8"))).split('x')[-1])


def gen_crc32_hash(params):
    return str(hex(zlib.crc32(str(params).encode("utf-8"))).split('x')[-1])


def gen_md5_hash_file(file_name):
    return hashlib.md5(open(file_name, 'rb').read()).hexdigest()


def gen_name(size):

    return string.capwords(''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(size)))


def gen_map(map_file):
    map = open("inside/maps/%s" % map_file, "w")

    player_spawn = 0

    map_strings = ""

    map_strings += "#" * header.DEFAULT_WEIGHT_MAP + "\n"

    for i in range(0, header.DEFAULT_QUANTITY_MAP_STRING - 2, 1):
        map_strings += "#"

        for i in range(0, header.DEFAULT_WEIGHT_MAP - 2, 1):
            map_natation = nprand.choice(header.CONVENTIONAL_NOTATIONAL_WITHOUT_DETAIL)

            if player_spawn != 1:
                probabylity_emerge = nprand.randint(0, 10000001)

                if probabylity_emerge < 50:
                    map_strings += "p"
                    player_spawn = 1
                
                else:
                    map_strings += map_natation

            else:
                 map_strings += map_natation
                


        map_strings += "#\n"

    map_strings += "#" * header.DEFAULT_WEIGHT_MAP + "\n"

    if player_spawn == 0:
        random_spawn_point = nprand.randint(0, 10001)
        valid_spawn_point = 0
        
        while valid_spawn_point != 1:
            if map_strings[random_spawn_point] == "#":
                random_spawn_point = nprand.randint(0, 10001)
            
            else:
                map_strings = map_strings[:random_spawn_point] + "p" + map_strings[random_spawn_point+1:]
                valid_spawn_point = 1
                

    map.write(map_strings)
