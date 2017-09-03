import os

import numpy as np

import header
import inside


def get_map_point(map_arr, coor):
    return map_arr[coor[0]][coor[1]]


def get_player_spawn(map_arr):
    spawn_finded = 0
    string_i = 1

    while spawn_finded != 1:
        if "p" in map_arr[string_i]:
            spawn_finded = 1

        else:
            string_i += 1

    return (list(map_arr[string_i]).index("p"), string_i)
