x = [1,2,3,4,5,6,7,8]
even = lambda x: x % 2 == 0
square = lambda x: x ** 2

print([square(i) for i in filter(even, x)])