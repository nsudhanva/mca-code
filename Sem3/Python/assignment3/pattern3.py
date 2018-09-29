num = int(input('Enter a number: '))
sum = 1
count = 1
for i in range(0, num):
    for j in range(0, count):
        print(sum, end=' ')
        sum = sum + 1
    print('')
    count = count + 1