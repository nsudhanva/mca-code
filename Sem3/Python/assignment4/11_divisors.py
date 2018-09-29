num = int(input('Enter a number: '))

def find_divisors(num):
    divisors = []

    for i in range(1, num + 1):
        if num % i == 0:
            divisors.append(i)

    return divisors

print('Divisors: ', find_divisors(num))
print('Divisors Sum: ', sum(find_divisors(num)))
print('Divisors Count: ', len(find_divisors(num)))