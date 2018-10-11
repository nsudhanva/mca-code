import re

# 1. Returns the characters of the string

string = input('Enter a string: ')
pattern = '[aeiou]'
find_all = re.findall(pattern, string)

occurances = {}

for i in find_all:
    occurances[i] = string.index(i)

print(occurances)

# 2. Return each word of the string

string = input('Enter a string: ')
pattern = input('Enter pattern: ')
print(string.split(pattern))

# 3. Return the first word of the given string

string = input('Enter a string: ')
pattern = '^\w+'
print(re.findall(pattern, string))

# 4. Return the last word of the given string

string = input('Enter a string: ')
pattern = '\w+$'
print(re.findall(pattern, string))

# 5. Return every two characters of each word of a given string

string = input('Enter a string: ')
pattern = '^.{0,2}'

for i in string.split(' '):
    print(re.findall(pattern, i))

# 6. Return consecutive two characters available at start of word boundary

string = input('Enter a string: ')
pattern = '^[A-Za-z][A-Za-z]'

for i in string.split(' '):
    print(re.findall(pattern, i))

# 7. Return max two characters available after the start of word boundary

string = input('Enter a string: ')
pattern = '^[A-Za-z][A-Za-z]'

for i in string.split(' '):
    print(re.findall(pattern, i))

# 8. Return the domain types of email

string = input('Enter a email: ')
pattern = '(?<=@)[^.]+(?=\.)'
print(re.findall(pattern, string))

# 9. Return domain types with extension

string = input('Enter a email: ')
pattern = '@[\w].+'
print(re.findall(pattern, string))

# 10. Return domain of given ids

string = input('Enter a email: ')
pattern = '\.[\w].+'
print(re.findall(pattern, string))

# 11. Return date from string

string = input('Enter a date: ')
pattern = '[0-9]{2}[-|\/]{1}[0-9]{2}[-|\/]{1}[0-9]{4}'
print(re.findall(pattern, string))

# 12. Return year of date fromn string

string = input('Enter a date: ')
pattern = '.*([1-3][0-9]{3})'
print(re.findall(pattern, string))

# 13. Return words that starts with vowel

string = input('Enter a string: ')
pattern = '.[aeiou]'
for i in string:
    print(re.findall(pattern, i))

# 14. Return words with consonants

string = input('Enter a string: ')
pattern = '.^[aeiou]'
for i in string:
    print(re.findall(pattern, i))

# 15. Validate a phone number

string = input('Enter a phone number: ')
pattern = '\+?\d[\d -]{8,12}\d'

print(re.findall(pattern, string))

# 16. Split with multiple delimiters

string = input('Enter a string with special characters or space: ')
pattern = input('Enter delimiters: ')

print(re.split(pattern, string))

# 17. Replace the substring with the pattern and counts how many times

string = input('Enter a string: ')
string_replace = input('Enter a replace string: ')
pattern = string_replace
print(re.sub(pattern, string_replace, string))

# 18. Matches a string that has an a followed by zero or more b's

string = input('Enter a string: ')
pattern = 'ab*?'
print(re.findall(pattern, string))

# 19. Find sequences of lowercase letters joined with an underscore

string = input('Enter a string: ')
pattern = '^[a-z]+_[a-z]+$'
print(re.findall(pattern, string))

# 20. Matches a string that has an a followed by anything but ends with b

string = input('Enter a string: ')
pattern = 'a.*?b$'
print(re.findall(pattern, string))

# 21. Matches a word containing z not start or end of the word

string = input('Enter a string: ')
pattern = '\Bz\B'

for i in string.split(' ')
    print(re.findall(pattern, string))

# 22. Extract year, date, month from an url

string = input('Enter a url: ')
pattern = '/(\d{4})/(\d{1,2})/(\d{1,2})/'
print(re.findall(pattern, string))

# 23. Seperate and print numbers of a given string

string = input('Enter a string: ')
pattern = '\d+'
print(re.findall(pattern, string))