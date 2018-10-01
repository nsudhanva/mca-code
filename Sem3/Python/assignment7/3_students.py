class Student:
    def __init__(self):
        pass

    def add_student(self, name, srn, gender):
        self.name = name
        self.srn = srn
        self.gender = gender
        
class Result(Student):
    def __init__(self, student):
        self.student = student
        self.subjects = 3
        self.internals = []
        self.externals = []
        self.assignments = []
        self.sgpa = 0

    def isa(self):
        print('Internals: ')
        for i in range(self.subjects):
            print('Enter subject', i, 'marks: ')
            marks = int(input())
            self.internals.append(marks)

    def esa(self):
        print('Externals: ')
        for i in range(self.subjects):
            print('Enter subject', i, 'marks: ')
            marks = int(input())
            self.externals.append(marks)

    def ass(self):
        print('Assignments: ')
        for i in range(self.subjects):
            print('Enter subject', i, 'marks: ')
            marks = int(input())
            self.assignments.append(marks)

    def calc_sgpa(self):
        results = []
        for i, j, k in zip(self.internals, self.externals, self.assignments):
            results.append(i / 2 + j * 0.4 + k)
            # print(i / 2 + j * 0.4 + k)

        self.sgpa = (sum(results) / (self.subjects * 100)) * 10

    def get_sgpa(self):
        return self.sgpa

student = Student()
result = Result(student)
result.isa()
result.esa()
result.ass()
result.calc_sgpa()
print('SGPA:', result.get_sgpa())
