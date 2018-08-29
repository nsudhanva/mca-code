# Practice Assignments
# Sudhanva

print(format(123, "d"))
# Output for program 1: 123

print(format(123.4567898, "f"))
# Output for program 2: 123.456790

print(format(12, "b"))
# Output for program 3: 1100

print(format(1234, "*>+7,d"))
# Output for program 4: *+1,234

print(format(123.4567, "^-09.3f"))
# Output for program 5: 0123.4570

print("The number is:{:d}".format(123))
# Output for program 6: The number is:123

print("The float number is:{:f}".format(123.4567898))
# Output for program 7: The float number is:123.456790

print("bin: {0:b}, oct: {0:o}, hex: {0:x}".format(12))
# Output for program 8: bin: 1100, oct: 14, hex: c

print("{:5d}".format(12))
# Output for program 9:    12

print("{:2d}".format(1234))
# Output for program 10: 1234

print("{:8.3f}".format(12.2346))
# Output for program 11:   12.235

print("{:05d}".format(12))
# Output for program 12: 00012

print("{:08.3f}".format(12.2346))
# Output for program 13: 0012.235

print("{:+f} {:+f}".format(12.23, -12.23))
# Output for program 14: +12.230000 -12.230000

print("{:-f} {:-f}".format(12.23, -12.23))
# Output for program 15: 12.230000 -12.230000

print("{: f} {: f}".format(12.23, -12.23))
# Output for program 16:  12.230000 -12.230000

print("{:5d}".format(12))
# Output for program 17:    12

print("{:^10.3f}".format(12.2346))
# Output for program 18:   12.235

print("{:<05d}".format(12))
# Output for program 19: 12000

print("{:=8.3f}".format(-12.2346))
# Output for program 20: - 12.235

print("{:5}".format("cat"))
# Output for program 21: cat

print("{:>5}".format("cat"))
# Output for program 22:   cat

print("{:^5}".format("cat"))
# Output for program 23:  cat

print("{:*^5}".format("cat"))
# Output for program 24: *cat*

print("{:.3}".format("caterpillar"))
# Output for program 25: cat

print("{:5.3}".format("caterpillar"))
# Output for program 26: cat

print("{:^5.3}".format("caterpillar"))
# Output for program 27:  cat

person = {'age': 23, 'name': 'Adam'}
print("{p[name]}'s age is: {p[age]}".format(p=person))
# Output for program 28: Adam's age is: 23

person = {'age': 23, 'name': 'Adam'}
print("{name}'s age is: {age}".format(**person))
# Output for program 29: Adam's age is: 23

string = "{:{fill}{align}{width}}"
print(string.format('cat', fill='*', align='^', width=5))
# Output for program 30: *cat*

num = "{:{align}{width}.{precision}f}"
print(num.format(123.236, align='<', width=8, precision=2))
# Output for program 31: 123.24

print('%s %s' % ('one', 'two'))
# Output for program 32: one two

print('{} {}'.format('one', 'two'))
# Output for program 33: one two

print('%d %d' % (1, 2))
# Output for program 34: 1 2

print('{} {}'.format(1, 2))
# Output for program 35: 1 2

print('{1} {2} {0}'.format('one', 'two', 'three'))
# Output for program 36: two three one

print('%10s' % ('test',))
# Output for program 37:       test

print('{:>10}'.format('test'))
# Output for program 38:       test

print('%-10s' % ('test',))
# Output for program 39: test

print('{:10}'.format('test'))
# Output for program 40: test

print('{:_<10}'.format('test'))
# Output for program 41: test______

print('{:^10}'.format('test'))
# Output for program 42:    test

print('{:^6}'.format('zip'))
# Output for program 43:  zip

print('%.5s' % ('xylophone',))
# Output for program 44: xylop

print('{:.5}'.format('xylophone'))
# Output for program 45: xylop

print('%-10.5s' % ('xylophone',))
# Output for program 46: xylop

print('{:10.5}'.format('xylophone'))
# Output for program 47: xylop

print('%d' % (42,))
# Output for program 48: 42

print('{:d}'.format(42))
# Output for program 49: 42

print('%f' % (3.141592653589793,))
# Output for program 50: 3.141593

print('{:f}'.format(3.141592653589793))
# Output for program 51: 3.141593

print('%4d' % (42,))
# Output for program 52:   42

print('{:4d}'.format(42))
# Output for program 53:   42

print('%06.2f' % (3.141592653589793,))
# Output for program 54: 003.14

print('{:06.2f}'.format(3.141592653589793))
# Output for program 55: 003.14

print('%04d' % (42,))
# Output for program 56: 0042

print('{:04d}'.format(42))
# Output for program 57: 0042

print('%+d' % (42,))
# Output for program 58: +42

print('{:+d}'.format(42))
# Output for program 59: +42

print('% d' % ((- 23),))
# Output for program 60: -23

print('{: d}'.format((- 23)))
# Output for program 61: -23

print('% d' % (42,))
# Output for program 62:  42

print('{: d}'.format(42))
# Output for program 63:  42

print('{:=5d}'.format((- 23)))
# Output for program 64: -  23

print('{:=+5d}'.format(23))
# Output for program 65: +  23

data = {'first': 'Hodor', 'last': 'Hodor!'}

print('%(first)s %(last)s' % data)
# Output for program 66: Hodor Hodor!

print('{first} {last}'.format(**data))
# Output for program 67: Hodor Hodor!

print('{first} {last}'.format(first='Hodor', last='Hodor!'))
# Output for program 68: Hodor Hodor!

from datetime import datetime

print('{:%Y-%m-%d %H:%M}'.format(datetime(2001, 2, 3, 4, 5)))
# Output for program 69: 2001-02-03 04:05

print('{:{align}{width}}'.format('test', align='^', width='10'))
# Output for program 70:    test

print('%.*s = %.*f' % (3, 'Gibberish', 3, 2.7182))
# Output for program 71: Gib = 2.718

print('{:.{prec}} = {:.{prec}f}'.format('Gibberish', 2.7182, prec=3))
# Output for program 72: Gib = 2.718

print('%*.*f' % (5, 2, 2.7182))
# Output for program 73:  2.72

print('{:{width}.{prec}f}'.format(2.7182, width=5, prec=2))
# Output for program 74:  2.72

print('{:{prec}} = {:{prec}}'.format('Gibberish', 2.7182, prec='.3'))
# Output for program 75: Gib = 2.72

print('{:{}{}{}.{}}'.format(2.7182818284, '>', '+', 10, 3))
# Output for program 76:      +2.72

print('{:{}{sign}{}.{}}'.format(2.7182818284, '>', 10, 3, sign='+'))
# Output for program 77:      +2.72
