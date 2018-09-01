a = int(input('Enter number 1: '))
b = int(input('Enter number 2: '))

def add_up(a, b):
    return a + b

def sub_up(a, b):
    return a - b

def mul_up(a, b):
    return a * b

def div_up(a, b):
    try:
        return a / b
    except ZeroDivisionError:
        print('Cannot divide by zero')

print(add_up(a, b))
print(sub_up(a, b))
print(mul_up(a, b))
print(div_up(a, b))