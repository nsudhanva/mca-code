# fibonacci

def fibonacci(n):
    if n == 0:
        yield 0

    if n == 1:
        yield 1

    count = 0
    i = 0
    j = 1
    
    while i < n:
        yield i
        j = i + j
        i = j
        # i, j = j, a + b

gen = fibonacci(10)
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))