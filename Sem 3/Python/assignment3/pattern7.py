num = int(input('Enter a num: '))

for i in range(1, num + 1):
    print(i * str(chr(i + 64) + ' '))