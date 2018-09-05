# accept a number and display if it is neg or pos or zero

# Accept a number from the user and display if it is equal to zero

num = int(input('Enter a num: '))

if num == 0:
    print('Zero')
elif num < 0:
    print('Negative')
else:
    print('Positive')