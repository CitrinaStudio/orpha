import sys
import timeit

import numpy

import gen

for i in range(0, 100, 1):        
    params = gen.gen_name(numpy.random.randint(500, 900000))
    crc32 = gen.gen_crc32_hash(params)
    adler32 = gen.gen_adler32_hash(params)
    print("\n  |  " + params + " | " + crc32 + " | " + adler32)
