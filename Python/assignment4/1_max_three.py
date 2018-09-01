numbers = input('Enter a list of numbers: ').replace(' ','').split(',')
numbers = [int(i) for i in numbers]

def max_three(numbers):
    return max(numbers)

print('Max: ', max_three(numbers))