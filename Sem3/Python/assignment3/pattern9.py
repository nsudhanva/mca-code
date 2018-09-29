num = int(input('Enter a num: '))

count = num
sum = 0
temp = num - 1

for i in range(1, num + 1):
    print(temp * 2 * ' ', end='')
    for j in reversed(range(1, i + 1)):
        print(j + sum, end=' ')
    print()
    count -= 1
    sum += i
    temp -= 1