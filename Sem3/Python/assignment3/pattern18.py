num = int(input('Enter a num: '))

count = 0
for i in range(1, num + 1):
    print(count * ' ', end='')
    for j in range(num, i - 1, -1):
        print(j , end=' ')
    print('')
    count += 1