# getatrr(obj, name)
# hasattr(obj, name)
# setattr(obj, name, value)
# delattr(obj, value)

class Student:
    student_id = ''
    student_name = ''
    student_age = ''

    def __init__(self):
        self.student_id = '101'
        self.student_name = 'Sudhanva'
        self.student_age = '20'

student = Student()
print('GetAttr name: ', getattr(student, 'student_name'))
print('GetAttr name traditional: ', student.student_name)
print('HasAttr age: ', hasattr(Student, 'student_age'))
print('DelAttr age: ', delattr(Student, 'student_age'))
print('HasAttr age: ', hasattr(Student, 'student_age'))
print('SetAttr age: ', setattr(Student, 'student_age', '20'))
print('HasAttr age: ', hasattr(Student, 'student_age'))

