import math

class Shape:
    def __init__(self):
        self.color = 'Black'

    def set_color(self, color):
        self.color = color

    def get_color(self):
        return self.color

class Rectangle(Shape):
    def __init__(self):
        self.length = 0
        self.breadth = 0

    def set_length(self, length):
        self.length = length

    def get_length(self):
        return self.length

    def set_breadth(self, breadth):
        self.breadth = breadth

    def get_breadth(self):
        return self.breadth

    def get_area(self):
        return self.get_length() * self.get_breadth()

    def get_perimeter(self):
        return self.get_length() * 2 + self.get_breadth() * 2

class Circle(Shape):
    def __init__(self):
        self.radius = 0

    def set_radius(self, radius):
        self.radius = radius

    def get_radius(self):
        return self.radius

    def get_area(self):
        return math.pi * (self.get_radius()) ** 2

    def get_perimeter(self):
        return 2 * math.pi * (self.get_radius())

print('Shape: ')
shape = Shape()
shape.set_color('Red')
print(shape.get_color())
print()
print('Rectangle: ')
rect = Rectangle()
rect.set_color('Blue')
print('Color:', rect.get_color())
rect.set_length(10)
rect.set_breadth(20)
print('Area:', rect.get_area())
print('Perimeter:', rect.get_perimeter())
print()
print('Circle: ')
circle = Circle()
circle.set_color('Pink')
print('Color:', circle.get_color())
circle.set_radius(15)
print('Area:', round(circle.get_area(), 2))
print('Perimeter:', round(circle.get_perimeter()), 2)