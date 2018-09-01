something = input('Enter a string: ')

def reverse_a_string(something):
    i = len(something) - 1
    reverse_something = ''
    
    while i >= 0:
        reverse_something += something[i]
        i -= 1
    
    return reverse_something

print('Before reversing:', something)
print('After reversing:', reverse_a_string(something))
