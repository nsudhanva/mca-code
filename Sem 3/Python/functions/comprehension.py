x = [1,2,3,4,5,6,7,8]
y = 'YOUWOTM8'
even = lambda x: x % 2 == 0
square = lambda x: x ** 2

print([square(i) for i in filter(even, x)])

# given alist of number create a new list which conntains number multiploes by 3 + 2
print([(i * 3) + 2 for i in x])

# create a list of lower chars given upper
print([i.lower() for i in y])

# list of squres from 0 to 9 where the squre is greater than 5 but less than 50
s = range(0, 10)
print([i ** 2 for i in s if i < 50])