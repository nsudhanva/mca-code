# 1. Find the largest of three numbers.

print(max(list(input('Enter three numbers: ').replace(' ', '').split(','))))

# 2. Find the smallest of three numbers.

print(min(list(input('Enter three numbers: ').replace(' ', '').split(','))))

# 3. Read the list of fruits and perform the following:
# If number of fruits are more than 4, add one more fruit and display 'EXCELLENT'. If banana is
# in list, change any one fruit and display 'GOOD'. If apple is in list, delete any one fruit and
# display 'AVERAGE' otherwise 'BAD'

fruits = list(input('Enter fruits: ').replace(' ', '').split(','))
print("Original: ", fruits)

if len(fruits) > 4:
    fruits.append('papaya')
    print('EXCELLENT')
    print('After appending: ', fruits)

    if 'banana' in fruits:
        fruits[0] = 'guava'
        print('GOOD')
        print('After replacing: ', fruits)

        if 'apple' in fruits:
            fruits.pop()
            print('AVERAGE')
            print('After removing: ', fruits)
        else:
            print('BAD')
            print(fruits)

# 4. Read a variable, find whether it is number or string. If it is a string whether it is in upper case,
# lower case or something else.

var = input('Enter something: ')

if var.isdigit():
    print('Number or something else')
else:
    print('String')

    if var.isupper():
        print('Upper case')
    else:
        print('Lower case')

# 5. Find those numbers which are divisible by 9 and multiples of 5.

numbers = list(range(1, 1001))
nine_five = []

for i in numbers:
    if i % 9 == 0 and i % 5 == 0:
        nine_five.append(i)

print(nine_five)

# 6. Display the multiplication table from 1 to n in the form 1*1 = 1

limit = int(input('Enter limit: '))

for i in range(1, limit + 1):
    print('--- Table of', i, '---')
    for j in range(1, 11):
        print(str(i) + ' * ' + str(j) + ' = ' + str(i * j))

# 7. Display (pattern) depending on the number of rows.

n = int(input('Enter limit: '))

i = 1

while i <= n:
    print(i * '* ')
    i += 1

i -= 2

while i >= 1:
    print(i * '* ')
    i -= 1


# 8. Read a list of numbers and display the even numbers and odd numbers separately. Sum the
# even numbers and odd numbers and display the same.

numbers = list(input('Enter numbers: ').split(','))
odds = []
evens = []

for i in numbers:
    if int(i) % 2 == 0:
        evens.append(int(i))
    else:
        odds.append(int(i))

print('Odds: ', odds)
print('Sum of odds: ', sum(odds))
print('Evens: ', evens)
print('Sum of evens: ', sum(evens))

# 9. Read a list of numbers and display the numbers whose sum of individual digits is an even
# number.

numbers = list(input('Enter numbers: ').split(','))

digits = []
bools = []
sum_digits = []

for i in numbers:
    num_list = list(i)
    num_list = [int(i) for i in num_list]
    digits.append(sum(num_list))
    boo = sum(num_list) % 2 == 0
    bools.append(boo)

count = 0
for i in bools:
    if i == True:
        sum_digits.append(numbers[count])
    count += 1

print('Original: ', numbers)
print('Numbers with sum as even: ', sum_digits)

# 10. Check whether an alphabet of a string inputted by the user is a vowel or consonant.

string = input('Enter a string: ')
string_list = list(string)
vowels = ['a', 'e', 'i', 'o', 'u']
string_dict = {}

for i in string_list:
    if i in vowels:
        string_dict[i] = 'vowel'
    else:
        string_dict[i] = 'conso'

print(string_dict)

# 11. Check whether a string inputted by the user is representing an integer or not.

something = input('Enter something: ')

if something.isalpha():
    print('String')
else:
    print('Number')

# 12. Display (pattern) depending on the number of rows.

n = int(input('Enter limit: '))

i = 1

while i <= n:
    print(i * '* ')
    i += 1