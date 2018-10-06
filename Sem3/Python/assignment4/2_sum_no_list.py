numbers = input('Enter a list of numbers (csv): ').replace(' ','').split(',')
numbers = [int(i) for i in numbers]

def sum_of_three(numbers):
    summ = 0

    for i in numbers:
        summ += i 

    return summ

print('Sum:', sum_of_three(numbers))