numbers = input('Enter a list of numbers (csv): ').replace(' ','').split(',')
numbers = [int(i) for i in numbers]

def max_three(numbers):
    maxx = -1

    for i in numbers:
        if i > maxx:
            maxx = i
    return maxx

print('Max:', max_three(numbers))