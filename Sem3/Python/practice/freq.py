numbers = list(input('Enter some numbers: ').replace(' ', '').split(','))
numbers = [int(i) for i in numbers]
freq = {i:numbers.count(i) for i in numbers}

print(freq)