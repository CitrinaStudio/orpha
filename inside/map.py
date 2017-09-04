""" Module for use map """


def get_map_point(map_arr, coor):
    """ Получить значение, находящееся по заданным кооринатам """

    return map_arr[coor[0]][coor[1]]


def get_player_spawn(map_arr):
    """ Получить координаты появления игрока на карте """

    spawn_finded = 0
    string_i = 1 # Потому что 0-ая строка содержит в себе

    while spawn_finded != 1:
        if "p" in map_arr[string_i]:
            spawn_finded = 1

        else:
            string_i += 1

    return (list(map_arr[string_i]).index("p"), string_i)
