some_strings = list(input('Enter some strings: ').replace(' ', '').split(','))

def count_ind_strings(some_strings):
    for i in some_strings:
        print('Length of string:', i, ':', len(i))

count_ind_strings(some_strings)