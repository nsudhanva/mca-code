# -*- coding: utf-8 -*-
"""
Created on Tue Oct 30 14:36:13 2018

@author: Sudhanva
"""

# Create a dataframe that consists
# 1. Names 10
# 2. Age 10
# 3. Dependents bools 10
import numpy as np
import pandas as pd

df = pd.DataFrame({'name': ['Sudhanva', 'Narayana'], 'age': [10, 20], 'dep': [True, False]})

s_df = pd.Series(['a', 'b', 'c', 'a'], dtype='category')
cat_df = pd.Categorical(['a', 'b', 'c', 'a', 'b', 'c'], ['a', 'b', 'c'], ordered=True)

cat_df.describe()

s_df.cat.categories = ['Group %s' % g for g in s_df.cat.categories]

s_df.cat.add_categories([4])

obj = pd.Series([4.5, 6.7, -1.2, 3.4], index = ['d', 'a', 'b', 'c'])

obj2 = pd.Series(['blue', 'green', 'yellow'], index = [0, 2, 4])
obj2 = obj2.reindex(range(6), method = 'ffill')
obj2 = obj2.reindex(range(6), method = 'bfill')
obj2 = obj2.reindex(range(6), method = 'nearest')

df = pd.DataFrame(np.arange(9).reshape((3, 3)), index = ['a', 'c', 'd'], columns = ['Bangalore', 'Mysore', 'Mangalore'])
df_1 = df.reindex(['a', 'b', 'c', 'd'])
df_1 = df.reindex(['a', 'b', 'c', 'd'], fill_value = 12)

cities = ['Bangalore', 'Mysore', 'Mangalore']
df.reindex(columns = cities)

new_df = pd.Series(['Tom', 'William Rick', 'John', 'Albert', np.nan, '1234', 'Steve Smith'])
new_df.str.lower()
new_df.str.upper()
new_df.str.isupper()
new_df.str.islower()




