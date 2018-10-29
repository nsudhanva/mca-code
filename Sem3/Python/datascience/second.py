import numpy as np
num =  np.array([[0,1,2],[3,4,5],[6,7,8]]) 
num[:3, :2]
num[-1:]

num[:3, 2]
num[1:, :2]

arr = np.arange(8)
print(arr)

arr = np.arange(8).reshape(2, 4)
print(arr)

#arr = np.arange(8).reshape(1,1,1,1,1,1,1,1)
arr[arr>4]