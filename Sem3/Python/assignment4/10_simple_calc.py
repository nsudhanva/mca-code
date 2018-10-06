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

while True:
    print('1. Add')
    print('2. Sub')
    print('3. Mul')
    print('4. Div')
    print('5. Quit')
    
    choice = int(input('Enter your choice: '))

    if choice == 1:
        print(add_up(a, b))

    elif choice == 2:
        print(sub_up(a, b))
    elif choice == 3:
        print(mul_up(a, b))
    elif choice == 4:
        print(div_up(a, b))
    else:
        print('Goodbye')
        break


