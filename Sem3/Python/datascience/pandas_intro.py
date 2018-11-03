import numpy as np
import pandas as pd

data = np.array([1,2,3,5,6])
df = pd.Series(data)

data[0]

obj = pd.Series([1,2,-3,4,-5], index=['d', 'b', 'c', 'a', 'e'])

obj[obj > 0]
obj ** 2


cities = {'Bangalore': 2000, 'Mysore':4000}
obj = pd.Series(cities)

cities_list = ['Mandya']
obj = pd.Series(cities, index = cities_list)

df = pd.DataFrame({'city': ['Bangalore', 'Mysore'], 'state': ['Karnataka', 'Karnataka']})

data = [{'a': 1, 'b': 2}, {'a': 5, 'b': 10, 'c': 20}]

df1 = pd.DataFrame(data, index=['first', 'second'], columns=['a', 'b'])
df1.size

