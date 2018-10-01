import math 

class Distance:
    distance_count = 0

    def __init__(self):
        self.distance = 0
        pass

    def get_distance(self):
        distance_1 = float(input('Enter distance 1: '))
        distance_2 = float(input('Enter distance 2: '))

        self.distance_1 = distance_1
        self.distance_2 = distance_2
        Distance.distance_count += 1
        return Distance.distance_count

    def show_distance(self):
        if type(self.distance_1) is float:
            distance_1 = int(self.distance_1)
            distance_2 = int(self.distance_2)
        else:
            distance_1 = self.distance_1
            distance_2 = self.distance_2

        print('Distance 1:', distance_1, 'KM', self.distance_1 % 1, 'M')
        print('Distance 2:', distance_2, 'KM', round(self.distance_2 % 1), 'M')
        print('Total Distance:', int(self.distance), 'KM', round(self.distance % 1), 'M')

    def add_distance(self):
        self.distance = self.distance_1 + self.distance_2

distance = Distance()
distance.get_distance()
distance.add_distance()
distance.show_distance()



    