# create a class complex and adds, subs two complex numbers

class Complex:

    def __init__(self, real = 0, img = 0):
        self.real = real
        self.img = img

    def add(self, num1, num2):
        self.real = num1.real + num2.real
        self.img = num1.img + num2.img
        return self

    def sub(self, num1, num2):
        self.real = num1.real - num2.real
        self.img = num1.img - num2.img
        return self

comp = Complex()
comp1 = Complex(10, 20)
comp2 = Complex(20, 30)

comp = comp.add(comp1, comp2)
print('Sum: ')
print(comp.real, comp.img)

comp = comp.sub(comp1, comp2)
print('Sub: ')
print(comp.real, comp.img)
