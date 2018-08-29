num = int(input('Enter a num: '))

for i in range(1, num + 1):
    for j in reversed(range(1, i + 1)):
        print(j, end=' ')
    print('')