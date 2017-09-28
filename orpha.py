#!/bin/python3

"""Test module"""

import inside
import header
import os
import glob
import sys

if len(sys.argv) > 1:
    if sys.argv[1] == "reset":
        mapslist = glob.glob(header.M_P + "*")
        for map in mapslist:
            os.remove(map)
        os.remove("game.json")
    elif sys.argv[1] == "gen" and os.path.isdir("maps/") == True:
        inside.gen.gen_map(map_file="default_map")
    elif os.path.isdir("maps/") == False and sys.argv[1] == "gen":
        os.mkdir("maps/")
        inside.gen.gen_map(map_file="default_map")
else:
    inside.shell.init()