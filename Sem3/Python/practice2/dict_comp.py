cube = lambda x: x * x * x

d1 = {x : cube(x) for x in range(1, 10)}
print(d1)