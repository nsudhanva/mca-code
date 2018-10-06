some_list = [1,23,45,6,6]

my_iter = iter(some_list)
print(next(my_iter))
print(next(my_iter))
print(next(my_iter))
print(my_iter.__next__())
print(my_iter.__next__())
next(my_iter)