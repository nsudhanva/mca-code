class Complex:

    def __init__(self, real, img):
        self.real = real
        self.img = img

    def __add__(self, other):
        return Complex(self.real + other.real, self.img + other.img)

    def __sub__(self, other):
        return Complex(self.real - other.real, self.img - other.img)

    def __mul__(self, other):
        return Complex(self.real * other.real, self.img * other.img)

    def __div__(self, other):
        return Complex(self.real / other.real, self.img / other.img)


r, i = 10, 20
u = Complex(r, i)

r, i = 10, 20
v = Complex(r, i)

w = u + v
x = u - v
y = u * v
z = u / v

print(w.real, w.img)
print(x.real, x.img)
print(y.real, y.img)
print(z.real, z.img)