num = int(input('Enter a number: '))

def sum_up(num):
    if num == 1:
        return 1
    else:
        return sum_up(num - 1) + num

print('Sum of', num, 'numbers:', sum_up(num))