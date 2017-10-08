import math
import time

from numpy import random as random

import header
import inside


def gen_dungeon_room():

    lambda_coeff = math.gamma(random.uniform(0.85, 1.23) / (math.pi) * 3)

    map = ""

    map += '#' * math.ceil(header.DUNGEON_WEIGHT_ROOM * lambda_coeff) + '#' * \
        math.ceil(header.DUNGEON_WEIGHT_ROOM * lambda_coeff) + '#\n'

    for y in range(1, math.ceil(header.DUNGEON_HEIGHT_ROOM * lambda_coeff), 1):
        map += '#'

        for _ in range(1, math.ceil(header.DUNGEON_WEIGHT_ROOM * lambda_coeff), 1):
            if random.random() > 0.97:
                map += '' + 'E'
            else:
                map += ' '

        map += '#\n'
    map += '#' * math.ceil(header.DUNGEON_WEIGHT_ROOM * lambda_coeff) + '#' * \
        math.ceil(header.DUNGEON_WEIGHT_ROOM * lambda_coeff) + '#\n'

    return {"map": map, "weight": math.ceil(header.DUNGEON_WEIGHT_ROOM * lambda_coeff), "height": math.ceil(header.DUNGEON_HEIGHT_ROOM * lambda_coeff)}


print(gen_dungeon_room()['map'])
"""def dungeon_compositor(dungeon_size=2):
    map = ""
    for i in range(0, dungeon_size):
        map += gen_dungeon_room()["map"]

    print(map)


dungeon_compositor(5)"""
