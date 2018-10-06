# Create a base class called as student that has student name and student srn.Method 'display' that displays the name and srn
#create a class 'marks' in which sub1,sub2,sub3 as its instance variables.Method 'total' calculates total
#create a derived class called 'result' displays pass or fail and the student info

class Student:
    def __init__(self, name, srn):
        self.name = name
        self.srn = srn

    def display(self):
        print('name = {0}, srn = {1}'.format(self.name,self.srn))


class Marks:
    def __init__(self, sub1, sub2, sub3):
        self.sub1 = sub1
        self.sub2 = sub2
        self.sub3 = sub3

    def total(self):
        self.total = self.sub1 + self.sub2 + self.sub3
        print('total = ',self.total)


class Result(Student, Marks):

    def __init__(self, student, marks):
        self.student = student
        self.marks = marks
        # pass

    def display(self):
        print(self.student.name, self.marks.sub1, self.marks.sub2,self.marks.sub3, self.marks.total)
        if(self.marks.sub1 > 35 and self.marks.sub2 > 35 and self.marks.sub3 > 35):
            print('pass')
        else:
            print('fail')


stdObj = Student('shreedhar',1234)
stdObj.display()

marksObj = Marks(45,31,56)
marksObj.total()

resObj = Result(stdObj, marksObj)
resObj.display()