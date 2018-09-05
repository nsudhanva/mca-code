import functools

a = [1,2,3,4,5,6,7,8,9,10]
b = 'yomamasofattheyoumissatvseries'

two = lambda x:x * x * 2
even = lambda x: x % 2 == 0
div5 = lambda x: x % 5 == 0
pow = lambda x: x ** 2
add = lambda x,y:x + y
mul = lambda x,y,z:x * y * z
char_fil = lambda x: x not in ['a', 'e', 'i', 'o', 'u']

print(two(10))
print(add(10, 20))
print(mul(10, 20, 30))

print([i for i in map(two, a)])
print([i for i in map(even, a)])
print([i for i in filter(even, a)])
print([i for i in filter(div5, a)])
print([i for i in filter(char_fil, b)])
print(functools.reduce(add, a))