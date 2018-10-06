import sys
a = 10
b = 20
c = 100
d = [1,2,3]

# del a
print(sys.getrefcount(a))
print(sys.getrefcount(b))
print(sys.getrefcount(c))
print(sys.getrefcount(a + b))
print(sys.getrefcount(d))
print(sys.getrefcount(d[0]))
print(sys.getrefcount(c))
