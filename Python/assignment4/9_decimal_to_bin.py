try:
    num = int(input('Enter a number: '))
except Exception:
    print('Some input error')

def convert_to_binary(num):
    if num > 1:
       convert_to_binary(num // 2)
    print(num % 2, end = '')

print('Binary: ', end = '')
convert_to_binary(num)