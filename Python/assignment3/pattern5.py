num = int(input('Enter a num: '))

for i, j, k in zip(range(1, num + 1), reversed(range(0, num)), range(0, num + 1)):
    print(j * '  ' + i * '* ' + k * '* ')