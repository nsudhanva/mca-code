something = input('Enter a string: ')
some_char = input('Enter a character: ')

def count_occ(something, some_char):
    count = 0

    for i in something:
        if i == some_char:
            count += 1

    return count

print('Count of', some_char, 'is', count_occ(something, some_char))