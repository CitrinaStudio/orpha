"""Test module"""

import inside

inside.gen.gen_detail_map(open("inside/maps/%s" % "default_map", "r").read().split(("\n")))
inside.shell.init()
