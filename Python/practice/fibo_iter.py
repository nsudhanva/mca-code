num = int(input('Enter a number: '))

x = 0
y = 1

# 0 1 1 2 3 5 7
z = x + y

for i in range(num):
    print(z)
    x = y
    y = z
    z = x + y
