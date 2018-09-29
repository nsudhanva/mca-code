# Define a class called as person that has instance vriables of name age and gender
# it has a method called as disply that displays the three instance variables
# define a class called as marks that has instance varibles of semester, sub 1,2,3
# Write a display function that displays the class and the total marks
# Define a class called as student that inherits from both person and marks
# Write a function called result that calls the disply function of the person class 
# and the display fucntion of the marks class

class Person:
    def __init__(self, name, age, gender):
        self.name = name 
        self.age = age
        self.gender = gender
    
    def display(self):
        return self.name, self.age, self.gender

class Marks:
    def __init__(self, sem, sub1, sub2, sub3):
        self.sem = sem
        self.sub1 = sub1
        self.sub2 = sub2
        self.sub3 = sub3

    def display(self):
        return self.sem, self.sub1 + self.sub2 + self.sub3

class Student(Person, Marks): 

    def __init__(self):
        pass

    def result(self):
        self.