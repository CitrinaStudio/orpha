""" Module of generation """

import random
import string
import zlib
import time
import hashlib

from numpy import random as nprand


def gen_adler32_hash(params):
    return str(hex(zlib.adler32(str(params).encode("utf-8"))).split('x')[-1])


def gen_crc32_hash(params):
    return str(hex(zlib.crc32(str(params).encode("utf-8"))).split('x')[-1])


def gen_md5_hash_file(file_name):
    return hashlib.md5(open(file_name, 'rb').read()).hexdigest()


def gen_name(size):

    return string.capwords(''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(size)))
