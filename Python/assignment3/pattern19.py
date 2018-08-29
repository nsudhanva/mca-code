num = int(input('Enter a num: '))

count = 0
sum = num

for i in range(1, num + 1):
    print(count * ' ', end='')
    for j in range(sum, 0, -1):
        print(j , end=' ')
    print('')
    count += 1
    sum -= 1