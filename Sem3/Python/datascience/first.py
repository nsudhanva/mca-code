import numpy as np

a = np.array([1, 2, 3])
print(a)

b = np.array([0,1,1,1,0], dtype=bool)
print(b)

x = np.ones((2, 3))
print(x)

y = np.ones_like((2, 3))
print(y)

z = np.zeros_like((2, 3))
print(z)

iden = np.identity(10)

emp = np.empty([3, 3])
full = np.full(2, 10)

print(emp)
print(emp[0])
print(emp[:0])
print(emp[:0, 2])
print(emp[0:2])

nine = np.random.randint(1, 10)