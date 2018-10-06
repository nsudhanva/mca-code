num = int(input('Enter a num: '))

for i, j, k in zip(reversed(range(1, num + 1)), range(0, num), reversed(range(0, num + 1))):
    print(j * ' ' + (i - k) * '* ' + k * '* ')