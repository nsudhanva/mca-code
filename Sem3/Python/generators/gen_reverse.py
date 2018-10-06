# pass a string to a generator and reverse its contents

def reverse_string(some_string):
    string = some_string
    length = len(some_string)

    while length > 0:
        length -= 1
        yield string[length]

gen = reverse_string('Hello')
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))
# print(next(gen))

