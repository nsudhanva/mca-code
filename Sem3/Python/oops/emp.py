# Create a class called as employee, employee count, call constructor, pass name and salary
# Inside the constructor, pass name and salary and increment the employee count
# Use an instance method that displayed the total number of employees present

class Employee:
    employee_count = 0

    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
        Employee.employee_count += 1

    def display_employee_count():
        return Employee.employee_count

emp1 = Employee('Sudhanva', 10000)
emp2 = Employee('Shreedhar', 20000)
emp3 = Employee('Kalyan', 15000)

print(Employee.employee_count)
print(Employee.display_employee_count())
