num = range(1, 11)
even = lambda x: x % 2 == 0

num = ['Even' if even(i) else 'Odd' for i in num]
print(num)
