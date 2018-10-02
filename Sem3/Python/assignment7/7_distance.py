class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __sub__(self, other):
        dist = ((self.x - other.x) ** 2 + (self.y - other.y) ** 2) ** (1 / 2)
        return round(dist, 2)

    def __gt__(self, other):
        if self.x > other.x:
            return self.x
        else:
            return other.x 

point_1 = Point(10, 15)
point_2 = Point(15, 30)

distance = point_1 - point_2
print('Distance: ', distance)
print('Greater: ', point_1 > point_2)

    