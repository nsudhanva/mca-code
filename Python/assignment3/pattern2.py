num = int(input('Enter a num: '))

for i, j in zip(range(1, num + 1), reversed(range(0, num))):
    print(j * ' ' + i * '*')