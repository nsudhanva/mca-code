import numpy as np

# 1. Get the characteristics of numpy array
arr = np.array([[1, 2, 3], [4, 5, 6]])
print(arr)
print(arr.shape)
print(type(arr))
print(arr.dtype)
print(arr.ndim)

# 2. Create an array from a regular Python list of tuple
arr = np.array([[1, 2, 3], [4, 5, 6]])
print(arr)

arr = np.array((1, 2, 3, 4, 5, 6))
print(arr)

# 3. Create arrays with initial placeholder content
arr = np.ndarray(shape=(2, 2), dtype=float, order='F')
print(arr)

# 4. Create sequence of numbers
arr = np.arange(0, 100)
print(arr)

# 5. Return evenly spaces values in array within a given interval
arr = np.arange(0, 100, 2)
print(arr)

# 6. Extract all odd numbers from arr
arr = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
print(arr[1::2])

# 7. Replace all odd numbers in arr with -1
arr = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
arr[arr % 2 == 1] = -1
print(arr)

# 8. Replace all odd numbers in arr with -1 without changing arr
arr = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
arr_copy = arr.copy()
arr[arr % 2 == 1] = -1
print('Modified: ')
print(arr)
print('Original: ')
print(arr_copy)
