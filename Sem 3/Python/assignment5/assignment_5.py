# Use lambda functions, map, reduce and filter and list comprehension to solve the following

## PART 1

# 1. Print the square root of a number

num = int(input('Enter a number: '))
sqrt = lambda x: x ** (1/2)
print(sqrt(num))

# 2. Solve the expression x+y*z/p

numbers = input('Enter a list of 4 numbers (csv): ').replace(' ','').split(',')
numbers = [int(i) for i in numbers]
exp = lambda x,y,z,p:x + y * z / p
print(exp(numbers))

# 3. From a given list filter out only numbers that are divisible by 3.

numbers = input('Enter a list of numbers (csv): ').replace(' ','').split(',')
numbers = [int(i) for i in numbers if int(i) % 2 == 0]
print(numbers)

# 4. Remove the ‘empty’ elements of a literable

names = input('Enter a list of strings with None (csv): ').replace(' ','').split(',')
names = list(filter(None, names))
print(names)

# 5. Find only the names that start with ‘J’.

names = input('Enter a list of strings with None (csv): ').replace(' ','').split(',')
names = [i for i in names if i.startswith('j') or i.startswith('J')]
print(names)

# 6. Compute the product of a list of integers

import functools
mul = lambda x, y: x * y
numbers = input('Enter a list of numbers (csv): ').replace(' ','').split(',')
numbers = [int(i) for i in numbers]
print(functools.reduce(mul, numbers))

# 7. Filter out the vowels from a list

vow = lambda x: x not in ['a', 'e', 'i', 'o', 'u']
strings = input('Enter a list of chracters (csv): ').replace(' ','').split(',')
strings = [i for i in filter(vow, strings)]
print(strings)

## PART 2

# 1. Remove vowels from a sentence

vowels = ['a', 'e', 'i', 'o', 'u']
sentence = input('Enter a sentence: ')
sentence = ''.join([i for i in sentence if i not in vowels])
print(sentence)

# 2. Take two lists of same kind of input and return a dictionary – first list item as key, second list
# item as value

list_1 = input('Enter some numbers (csv): ').replace(' ','').split(',')
list_2 = input('Enter some strings (csv): ').replace(' ','').split(',')
dictionary = dict(zip(list_1, list_2))
print(dictionary)

# 3. Change to uppercase in a list

upps = input('Enter some strings (csv): ').replace(' ','').split(',')
upps = [i.upper() for i in upps]
print(upps)

# 4. Change to lowercase in a list

lows = input('Enter some strings (csv): ').replace(' ','').split(',')
lows = [i.lower() for i in lows]
print(lows)

# 5. Take a matrix as input and return a list with each row placed on after the other

n = int(input('Enter no of rows: '))
matrix = [input('Enter column elements (csv): ').replace(' ','').split(',') for i in range(0, n)]
print(matrix)

# 6. Add two list comprehensions

numbers_1 = input('Enter a list of numbers 1 (csv): ').replace(' ','').split(',')
numbers_1 = [int(i) for i in numbers_1]

numbers_2 = input('Enter a list of numbers 2 (csv): ').replace(' ','').split(',')
numbers_2 = [int(i) for i in numbers_2]

numbers = [x + y for x, y in zip(numbers_1, numbers_2)]
print(numbers)

# 7. Print the length of each word in a list

strings = input('Enter some strings (csv): ').replace(' ','').split(',')
lengths = [len(i) for i in strings]

dictionary = dict(zip(strings, lengths))
print(dictionary)

# 8. Print the first and last letter of every name in a list

strings = input('Enter some strings (csv): ').replace(' ','').split(',')
first_last = [i[0] + '.' + i[-1] for i in strings]
print(first_last)

# 9. Print the reverse of each name in a list

strings = input('Enter some strings (csv): ').replace(' ','').split(',')
reverse_list = [i[::-1] for i in strings]
print(reverse_list)

# 10. Create a list of all possible pairs of drink and food from the lists ['water', 'tea', 'juice'] and
# ['ice cream', 'chocolates', 'strawberry'], respectively

drinks = ['water', 'tea', 'juice']
foods = ['ice cream', 'chocolates', 'strawberry']

combo = [[drink + ', ' + food] for drink in drinks for food in foods]
print(combo)

# 11. Create a list of the squares of the integers from 0 to 9 where the square is greater than 5
# and less than 50

square = lambda x: x ** 2
nums = list(range(0, 10))
square_list = [square(i) for i in nums if square(i) < 50]
print(square_list)

# 12. Create a list that contains names that start with a vowel

strings = input('Enter some strings (csv): ').replace(' ','').split(',')
vow = ('a', 'e', 'i', 'o', 'u')
strings = [i for i in strings if i.startswith(vow)]
print(strings)