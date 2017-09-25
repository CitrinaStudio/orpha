""" Module for use map """

import header
import inside
import random


from colorama import init
from termcolor import colored
from tinydb import TinyDB, Query


TDB = TinyDB("game.json")


init()

from numpy import random as nprand


def get_map_point(map_arr, coor):
    """ Получить значение, находящееся по заданным кооринатам """

    return map_arr[coor[1]][coor[0]]


def get_player_spawn(map_arr):
    """ Получить координаты появления игрока на карте """

    spawn_finded = 0
    string_i = 0  # Потому что 0-ая строка содержит в себе #

    while spawn_finded != 1:
        if "p" in map_arr[string_i]:
            spawn_finded = 1

        else:
            string_i += 1

    player_spawn_coor = (map_arr[string_i].index("p"), string_i)
    return list(player_spawn_coor)


def get_map_detail(map_arr, coor, player_params, motion_vector=""):
    """Получить детальное описание местности"""

    map_notation = inside.map.get_map_point(
        map_arr, (coor[0], coor[1]))
    coor_hash = inside.gen.gen_adler32_hash(str(coor))

    if map_notation in header.CONVENTIONAL_NOTATIONAL_TABLES_NAMES:
        print("You is on %s" % header.CONVENTIONAL_NOTATIONAL[map_notation])

    if map_notation in header.CONVENTIONAL_NOTATIONAL_WITHOUT_DETAIL:
        if motion_vector == "right":
            print("You see %s" % header.CONVENTIONAL_NOTATIONAL[inside.map.get_map_point(
                map_arr, (coor[0] + 1, coor[1]))])
        elif motion_vector == "left":
            print("You see %s" % header.CONVENTIONAL_NOTATIONAL[inside.map.get_map_point(
                map_arr, (coor[0] - 1, coor[1]))])
        elif motion_vector == "top":
            print("You see %s" % header.CONVENTIONAL_NOTATIONAL[inside.map.get_map_point(
                map_arr, (coor[0], coor[1] - 1))])
        elif motion_vector == "bottom":
            print("You see %s" % header.CONVENTIONAL_NOTATIONAL[inside.map.get_map_point(
                map_arr, (coor[0], coor[1] + 1))])

    else:
        print("You see the wall!")

    if map_notation in header.CONVENTIONAL_NOTATIONAL_ENTER_POINT:
        player_params["coor"] = "%s, %s" % (coor[0], coor[1])
        table = TDB.table(header.CONVENTIONAL_NOTATIONAL_TABLES_NAMES[map_notation])
        record_exists = table.search(Query().coor_hash == coor_hash)
        print(record_exists)
        enter_point_name = ""

        if map_notation == "V" and record_exists == []:
            enter_point_name = inside.gen.gen_village()

            table.insert({"coor_hash": coor_hash, "name": enter_point_name})

        elif map_notation == "V" and record_exists != []:
            enter_point_name = record_exists[0]["name"]

        inside.shell.play_start(
            player_params, recursion_count=1, map_file=enter_point_name, location_shell=" %s " % header.CONVENTIONAL_NOTATIONAL[map_notation])

        inside.shell.save_char(player_params, coor)

        return coor

    elif map_notation == "E":

        enemy_random = nprand.randint(1, 100)

        if enemy_random < 80:
            random_enemy = nprand.choice(header.POTENTIAL_ENEMY_LIST)
            enemy_hp = header.POTENTIAL_ENEMY_STATS[random_enemy]['hp']
            enemy_mp = header.POTENTIAL_ENEMY_STATS[random_enemy]['mp']
            enemy_danger_coeff = enemy_hp / enemy_mp

            enemy_params = (enemy_hp, enemy_mp, enemy_danger_coeff, random_enemy)

            player_battle_result = inside.shell.battlefield(player_params, enemy_params)

        else:
            print(header.POTENTIAL_MBOSS_PREFIX_LIST)
            random_prefix_mboss = nprand.choice(header.POTENTIAL_MBOSS_PREFIX_LIST)
            random_mboss = nprand.choice(header.POTENTIAL_ENEMY_LIST)
            mboss_hp = header.POTENTIAL_ENEMY_STATS[random_mboss]['hp'] + \
                header.POTENTIAL_MBOSS_PREFIX_STATS[random_prefix_mboss][0]
            mboss_mp = header.POTENTIAL_ENEMY_STATS[random_mboss]['mp'] + \
                header.POTENTIAL_MBOSS_PREFIX_STATS[random_prefix_mboss][1]
            mboss_danger_coeff = mboss_hp / mboss_mp

            enemy_params = (mboss_hp, mboss_mp, mboss_danger_coeff,
                            random_prefix_mboss + " " + random_mboss)

            player_battle_result = inside.shell.battlefield(player_params, enemy_params)

        if player_battle_result[0] == "player_die":
            query = Query()
            players = TDB.table("players")
            players.update({"coor": player_battle_result[1]}, query.name == player_params["name"])
            player_coor_temple = [int(player_battle_result[1].split(
                ",")[0]), int(player_battle_result[1].split(",")[1])]

            return player_coor_temple

    elif map_notation == "D":
        pass

    else:
        inside.shell.save_char(player_params, coor)

    return coor


def get_player_map(map_file, coor, maps_path=header.MAPS_PATH):
    mod_map = open(maps_path % map_file, "r").read().split(("\n"))

    map_string = list(mod_map[coor[1]])
    map_string[coor[0]] = colored("Y", "green", "on_white")
    mod_map[coor[1]] = ''.join(map_string)

    print("\n".join(mod_map))
