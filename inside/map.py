""" Module for use map """

import sqlite3 as sqlite

import inside
import header

# подключение к БД

CONNECT = sqlite.connect("game.db")
DB = CONNECT.cursor()

inside.util.db_check()


def get_map_point(map_arr, coor):
    """ Получить значение, находящееся по заданным кооринатам """

    return map_arr[coor[0]][coor[1]]


def get_player_spawn(map_arr):
    """ Получить координаты появления игрока на карте """

    spawn_finded = 0
    string_i = 1  # Потому что 0-ая строка содержит в себе

    while spawn_finded != 1:
        if "p" in map_arr[string_i]:
            spawn_finded = 1

        else:
            string_i += 1

    return (list(map_arr[string_i]).index("p"), string_i)


def get_map_detail(map_arr, coor, player_params):
    """Получить детальное описание местности"""
    map_notation = inside.map.get_map_point(
        map_arr, (coor[0], coor[1]))
    coor_hash = inside.gen.gen_crc32_hash(str(coor))

    print(map_notation, coor_hash)

    if map_notation in header.CONVENTIONAL_NOTATIONAL_TABLES_NAMES:
        print(list(DB.execute("SELECT * FROM %s WHERE coor_hash='%s'" %
                              (header.CONVENTIONAL_NOTATIONAL_TABLES_NAMES[map_notation], coor_hash))))
    else:
        print(5)

    if map_notation in header.CONVENTIONAL_NOTATIONAL_ENTER_POINT:
        player_params = list(player_params)
        player_params[4] = "%s, %s" % (coor[0], coor[1])
        inside.shell.play_start(
            player_params, recursion_count=1, map_file=inside.gen.gen_village(), location_shell=" %s " % header.CONVENTIONAL_NOTATIONAL[map_notation])
