"""Test module"""

import inside

inside.gen.gen_map("default_map")
map_arr = open("inside/maps/%s" % "default_map", "r").read().split(("\n"))
inside.gen.gen_detail_map(map_arr)
inside.shell.init()
