num = int(input('Enter a number: '))

if num < 0:
    raise ValueError
    return
    
def fibo(n):
    if n == 0 or n == 1:
        return 1
    else:
        return fibo(n - 1) + fibo(n - 2)
        
print('Sum: ', fibo(num))

for i in range(num):
       print(fibo(i))