something = input('Enter a string: ')

def palindrome(something):
    if something.isalpha():
        something = str(something)

    reverse_something = something[::-1]
    if reverse_something == something:
        return True
    else:
        return False

if palindrome(something):
    print('Palindrome')
else:
    print('Not a palindrome')