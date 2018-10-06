# Assignment 1 - Intro to Python Programming
# Sudhanva
# PES1201702260

import math

# 1. Check if two strings are anagrams of each other.

print('1. Check if two strings are anagrams of each other.')

anagram1 = input('Enter a string: ')
anagram2 = input('Enter another string: ')

anagram1 = list(anagram1)
anagram1.sort()
anagram2 = list(anagram2)
anagram2.sort()

print(anagram1 == anagram2)
print('')

# 2. Create a simple calculator

print('2. Create a simple calculator')

num1 = int(input("Enter a number: "))
num2 = int(input("Enter another number: "))
print("Add :", num1 + num2)
print("Sub :", num1 - num2)
print("Mul :", num1 * num2)
print("Div :", num1 / num2)
print("Exp :", num1 ** num2)
print("Mod :", num1 % num2)
print('')

# 3. Read a number n and Compute n+nn+nnn

print('3. Read a number n and Compute n+nn+nnn')

n = int(input('Enter a number: '))
print(int(n) + int(str(n) + str(n)) + int(str(n) + str(n) + str(n)))
print('')

# 4. Form a New String where the First Character and the Last Character of the old string have
# been Exchanged

print('4. Form a New String where the First Character and the Last Character of the old string have been Exchanged')

string1 = input('Enter a string: ')
string_length = len(string1)
string2 = string1[-1] + string1[1: string_length - 1] + string1[0] 

print('Old String: ', string1)
print('New String: ', string2)
print('')

# 5. Remove spaces from a string

print('5. Remove spaces from a string')

spaces = input("Enter a string: ")
print(spaces.strip())
print('')

# 6. Create two sets of numbers and implement union, intersection, Set Difference, Symmetric
# Difference of the sets

print('6. Create two sets of numbers and implement union, intersection, Set Difference, Symmetric Difference of the sets')

set1 = set(input('Enter set 1 values: '))
set2 = set(input('Enter set 2 values: '))

print("Union: ", set1 | set2)
print("Intersection: ", set1 & set2)
print("Set Difference: ", set1 - set2)
print("Symmetric Difference: ", set1 ^ set2)
print('')

# 7. Accept the radius and print the area and circumference of a circle

print('7. Accept the radius and print the area and circumference of a circle')

radius = float(input('Enter radius of the circle: '))
print('Area: ', math.pi * radius * radius)
print('Circumference: ', math.pi * 2 * radius)
print('')

# 8. Accept a sequence of comma-separated numbers from user and generate a list and a tuple
# with those numbers.

print('8. Accept a sequence of comma-separated numbers from user and generate a list and a tuple with those numbers.')

num_list = input('Enter numbers (comma sep): ').replace(' ', '').split(',')
print('List: ', list(num_list))
print('Tuple: ', tuple(num_list))
print('')

# 9. Accept a filename and display the following "File name is ---- and file extension is ------"

print('9. Accept a filename and display the following "File name is ---- and file extension is ------"')

filename = input('Enter a filename: ')
names = filename.replace(' ', '').split('.')
print('File name is ' + names[0] + ' and the extension is ' + names[1])
print('')

# 10. Accept a list of colors and display the odd numbered indexed colors.

print('10. Accept a list of colors and display the odd numbered indexed colors.')

colors = input('Enter list of colors: ').replace(' ', '').split(',')
print(colors[0:len(colors):2])
print('')

# 11. Accept the base and height of a triangle and compute the area.

print('11. Accept the base and height of a triangle and compute the area.')

base = float(input('Enter base: '))
height = float(input('Enter height: '))

print('Area of triangle: ', 0.5 * base * height)
print('')

# 12. Compute the Final amount of simple interest given principal amount, rate of interest, and a
# number of years.

print('12. Compute the Final amount of simple interest given principal amount, rate of interest, and a number of years.')

p = float(input('Enter principal amount: '))
t = float(input('Enter rate of interest: '))
r = float(input('Enter years: '))

print("SI: ", (p * t * r )/ 100.0)
print('')

# 13. Given weight and height calculate BMI (weight/(height * height))

print('13. Given weight and height calculate BMI (weight/(height * height))')

bmi_weight = float(input('Enter your weight: '))
bmi_height = float(input('Enter your height: '))

print("BMI: ", bmi_weight / (bmi_height * bmi_height))
print('')

# 14. Sort three integers without using conditions.

print('14. Sort three integers without using conditions.')

three_int = list(input('Enter three integers: ').replace(' ', '').split(','))
three_int.sort()
print('Sorted: ', three_int)
print('')

# 15. Concatenate two tuples

print('15. Concatenate two tuples')

tup1 = tuple(input('Enter numbers 1: '))
tup2 = tuple(input('Enter numbers 2: '))
print(tup1 + tup2)
print('')

# 16. Create a tuple of two tuples.

print('16. Create a tuple of two tuples.')

tup_1 = tuple(input('Enter numbers 1: '))
tup_2 = tuple(input('Enter numbers 2: '))
tup_3 = tuple((tup_1,) + (tup_2,))

print('Tuple of tuples: ', tup_3)
print('')

# 17. Get a single string from two given strings, separated by a space and swap the first two
# characters of each string.

print('17. Get a single string from two given strings, separated by a space and swap the first two characters of each string.')

strings = input('Enter two strings (space sep): ').replace(' ', '').split(' ')

len1 = len(strings[0])
len2 = len(strings[1])

print('String 1 before swapping ', strings[0])
print('String 2 before swapping ', strings[1])

print('String 1 after swapping ', strings[1][:2] + strings[0][1:len1])
print('String 2 after swapping ', strings[0][:2] + strings[1][1:len2])
print('')

# 18. Change a given string to a new string where the second and last but one chars have been
# exchanged.

print('18. Change a given string to a new string where the second and last but one chars have been exchanged.')

string1 = input('Enter a string: ')
string_length = len(string1)
string2 = string1[0] + string1[-2] + string1[1:string_length - 2] + string1[string_length - 1] 

print('Old String: ', string1)
print('New String: ', string2)
print('')

# 19. Accept a comma separated sequence of words as input and print the unique words in sorted
# form (alphanumerically).

print('19. Accept a comma separated sequence of words as input and print the unique words in sorted form (alphanumerically).')

strings = input('Enter strings: ').replace(' ', '').split(',')
strings = list(set(strings))
strings.sort()
print(strings)
print('')
