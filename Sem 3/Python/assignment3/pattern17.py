num = int(input('Enter a num: '))

count = num

for i in range(1, num + 1):
    print((count - 1) * ' ', end='')
    for j in range(1, i + 1):
        print(j, end=' ')
    print()
    count -= 1