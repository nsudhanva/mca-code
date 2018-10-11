# Given string, find all the occurences of vowels in that string

# import re
# string = input('Enter some string: ')
# pattern = '[aeiou]'
# print(re.findall(pattern, string))
# print(re.search(pattern, string))
# print(re.match(pattern, string))

# Given a list of text inof, print all the text that start with a
names = ['sudhanva', 'anjana', 'anagha', 'apoorva', 'vijay', 'shreedhar']

names_with_a = [i for i in names if i.startswith('a')]
print(names_with_a)