# Program to search for alphanumber values in string and print its starting position

string = input('Enter a string: ')

i = 0

while not string[i].isdigit():
    i += 1

print('Position:', i)