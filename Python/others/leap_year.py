num = int(input('Enter a year: '))

if num % 4 == 0 or num % 100 == 0 or num % 400 == 0:
    print('Leap')
else:
    print('Not')