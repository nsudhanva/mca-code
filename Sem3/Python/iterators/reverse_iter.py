# Write a class called as reverseiter that displys the list in reverse order

class ReverseIter:
    def __init__(self, my_list):
        self.my_list = my_list

    def __iter__(self):
        self.length = len(my_list)
        return self

    def __next__(self):
        if self.length != 0:
            self.length -= 1
            return my_list[self.length]
        else:
            raise StopIteration

my_list = [1,2,3,4,5,6]

reverse_iter = ReverseIter(my_list)

for i in reverse_iter:
    print(i)