lower = int(input('Enter lower limit: '))
upper = int(input('Enter upper limit: '))

def is_prime(n):
    for i in range(2, n):
        if n % i == 0:
            return False
    return True      

print('Prime numbers: ')

for i in range(lower, upper + 1):
    if is_prime(i):
        print(i, end = ' ')