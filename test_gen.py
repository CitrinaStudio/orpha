import timeit
import seaborn as sns
import numpy as np
import matplotlib.pyplot as plt


sns.set(color_codes=True)

setup = '''
import numpy

import gen
    
params = gen.gen_name(20)
crc32 = gen.gen_crc32_hash(params)
adler32 = gen.gen_adler32_hash(params)

print(params)
print(crc32)
print(adler32)

'''

time = np.asarray(timeit.Timer(setup=setup).repeat(1000))
print(time)
iris = sns.load_dataset("iris")
sns.distplot(time)
plt.show()
