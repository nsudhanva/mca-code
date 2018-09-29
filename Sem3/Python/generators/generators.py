def my_gen():
    n = 1
    print('This is printed first: ')
    yield n

    n += 1
    print('This is printed second: ')
    yield n

    n += 1
    print('This is printed last')
    yield n

a = my_gen()
print(next(a))
n = 1
print(next(a))
print(next(a))
# print(next(a))
# print(type(a))
# print(type(next(a)))