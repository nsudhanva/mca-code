num = range(1, 100)

by_two_six = lambda x: x % 2 == 0 and x % 6 == 0

num = [i for i in num if by_two_six(i)]
print(num)