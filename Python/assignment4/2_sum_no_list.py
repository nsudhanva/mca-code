numbers = input('Enter a list of numbers: ').replace(' ','').split(',')
numbers = [int(i) for i in numbers]

def sum_of_three(numbers):
    return sum(numbers)

print('Sum: ', sum_of_three(numbers))