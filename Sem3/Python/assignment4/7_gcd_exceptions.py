try:
    a = int(input('Enter number 1: '))
    b = int(input('Enter number 2: '))
except Exception as e:
    print('Some exception in input')

def calc_gcd(a, b):
    if(b == 0):
        return a
    else:
        try:
            return calc_gcd(b, a % b)
        except Exception as e:
            print('Some exception in recursion')

try:
    print('GCD:', calc_gcd(a, b))
except Exception as e:
    print('Some exception in calling')