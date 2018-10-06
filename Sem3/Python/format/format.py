num = [1, 2, 4.5, 6.3242321, 32434.333, 22]
print('int: ', "{0:d}".format(num[1]))
print('float: ', "{0:.2f}".format(num[3]))
print('float round: ', "{0:0f}".format(num[4]))
print('bin: ', "{0:b}".format(num[5]))
print('hex: ', "{0:x}".format(num[5]))
print('oct: ', "{0:o}".format(num[5]))
print('string: ','{1}{2}{0}'.format('yo', 'man', 'lol'))

print(format(123, 'd'))
print(format(123.45678901010, 'f'))
print(format(12, 'b'))
print(format(1234, '*>+7,d'))
print(format(123.4567, '^-09.3f'))