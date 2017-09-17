""" Module for use map """

import sqlite3 as sqlite

import header
import inside
import random

from header import DB
from header import CONNECT

inside.util.db_check()

from numpy import random as nprand


def get_map_point(map_arr, coor):
    """ Получить значение, находящееся по заданным кооринатам """

    return map_arr[coor[0]][coor[1]]


def get_player_spawn(map_arr):
    """ Получить координаты появления игрока на карте """

    spawn_finded = 0
    string_i = 1  # Потому что 0-ая строка содержит в себе #

    while spawn_finded != 1:
        if "p" in list(map_arr[string_i]):
            spawn_finded = 1

        else:
            string_i += 1

    player_spawn_coor = (map_arr[string_i].index("p"), string_i)

    return player_spawn_coor

def _enemies(player_params, count):
    for _ in range(0, count, 1):
        random_enemy = nprand.choice(header.POTENTIAL_ENEMY_LIST)
        enemy_hp = header.POTENTIAL_ENEMY_STATS[random_enemy]['hp']
        enemy_mp = header.POTENTIAL_ENEMY_STATS[random_enemy]['mp']
        enemy_danger_coeff = enemy_hp / enemy_mp

        print("You met the", random_enemy, "," "He has",
              enemy_hp, "hp and", enemy_mp, "mp.")
        
        enemy_params = (enemy_hp, enemy_mp, enemy_danger_coeff)

        print(enemy_params)
        print(int(int(player_params[7] + player_params[9]) / enemy_params[2] + 1))
        print(player_params[7], player_params[9])

def get_map_detail(map_arr, coor, player_params):
    """Получить детальное описание местности"""
        
    map_notation = inside.map.get_map_point(
        map_arr, (coor[0], coor[1]))
    coor_hash = inside.gen.gen_adler32_hash(str(coor))

    print(map_notation, coor_hash)

    if map_notation in header.CONVENTIONAL_NOTATIONAL_TABLES_NAMES:
        print(list(DB.execute("SELECT * FROM %s WHERE coor_hash='%s'" %
                              (header.CONVENTIONAL_NOTATIONAL_TABLES_NAMES[map_notation], coor_hash))))

    if map_notation in header.CONVENTIONAL_NOTATIONAL_ENTER_POINT:
        player_params = list(player_params)
        player_params[4] = "%s, %s" % (coor[0], coor[1])
        record_exists = str(list(DB.execute("""SELECT count(coor_hash) FROM %s WHERE coor_hash='%s'""" % (
            header.CONVENTIONAL_NOTATIONAL_TABLES_NAMES[map_notation], coor_hash))))
        enter_point_name = ""

        if map_notation == "V" and record_exists == '[(0,)]':
            enter_point_name = inside.gen.gen_village()
            DB.execute("""INSERT INTO %s (coor_hash, name) VALUES ('%s', '%s')""" % (
                header.CONVENTIONAL_NOTATIONAL_TABLES_NAMES[map_notation], coor_hash, enter_point_name))

        elif map_notation == "V" and record_exists != '[(0,)]':
            enter_point_name = list(DB.execute("""SELECT name FROM %s WHERE coor_hash='%s'""" % (
                header.CONVENTIONAL_NOTATIONAL_TABLES_NAMES[map_notation], coor_hash)))[0][0]

        print(player_params)

        CONNECT.commit()

        inside.shell.play_start(
            player_params, recursion_count=1, map_file=enter_point_name, location_shell=" %s " % header.CONVENTIONAL_NOTATIONAL[map_notation])

        inside.shell.save_char(player_params, coor)

    elif map_notation == "E":
        
        random_enemy = nprand.choice(header.POTENTIAL_ENEMY_LIST)
        enemy_hp = header.POTENTIAL_ENEMY_STATS[random_enemy]['hp']
        enemy_mp = header.POTENTIAL_ENEMY_STATS[random_enemy]['mp']
        enemy_danger_coeff = enemy_mp / enemy_hp
        
        enemy_params = (enemy_hp, enemy_mp, enemy_danger_coeff, random_enemy)

        inside.shell.battlefield(player_params, enemy_params)

    else:
        inside.shell.save_char(player_params, coor)

`  
def get_player_map(map_arr, coor):
    player_spawn_coor = get_player_spawn(map_arr)
    print("\n".join(map_arr))
    print(player_spawn_coor)
