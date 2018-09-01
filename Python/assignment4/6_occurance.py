something = input('Enter something: ')

# The quick brown fox jumps over the lazy dog

alphabets = [chr(i) for i in range(ord('a'), ord('z') + 1)]

def occur(something):
    for i in alphabets:
        if i not in something:
            return False
    return True

if occur(something):
    print('All occurances')
else:
    print('Not all occurances')


