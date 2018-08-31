
def is_prime(n):
    for i in range(2, n):
        if n % i == 0:
            return False
    return True        


numbers = list(input('Enter some numbers: ').replace(' ', '').split(','))
numbers = [int(i) for i in numbers]
print(numbers)

for i in numbers:
    if is_prime(i):
        print(i)