class DepartmentInfo:
    def __init__(self):
        self.dept_name = input('Enter department name: ')
        self.assigned_work = input('Enter work: ')
        self.time_comp = input('Enter time take: ')

class BasicInfo:
    def __init__(self):
        self.name = input('Enter name: ')
        self.id = input('Enter id: ')
        self.age = input('Enter name: ')
        self.gender = input('Enter name: ')

class Employee(BasicInfo, DepartmentInfo):
    def __init__(self, basic_info, dept_info):
        self.basic_info = basic_info
        self.dept_info = dept_info
    
    def get_basic_info(self):
        print(self.basic_info.name)
        print(self.basic_info.id)
        print(self.basic_info.age)
        print(self.basic_info.gender)

    def get_dept_info(self):
        print(self.dept_info.dept_name)
        print(self.dept_info.assigned_work)
        print(self.dept_info.time_comp)

basic_info = BasicInfo()
dept_info = DepartmentInfo()
employee = Employee(basic_info, dept_info)
employee.get_basic_info()
employee.get_dept_info()
