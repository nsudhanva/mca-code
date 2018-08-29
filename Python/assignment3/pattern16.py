num = int(input('Enter a num: '))

count = num

for i in range(1, num + 1):
    print(count * '  ', end='')
    for j in reversed(range(1, i + 1)):
        print(j, end=' ')
    print()
    count -= 1