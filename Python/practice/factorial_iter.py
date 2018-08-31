num = int(input('Enter a number: '))

if num < 0:
    raise ValueError
else:
    num_list = list(range(1, num + 1))
    fact = 1

    for i in num_list:
        fact = fact * i

print(fact)