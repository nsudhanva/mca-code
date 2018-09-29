num = int(input('Enter a number: '))

if num < 0:
    raise ValueError

def fact(n):
    if n == 0:
        return 1
    else:
        return fact(n - 1) * n

print(fact(num))