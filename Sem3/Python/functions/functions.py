# # # def print_something(parameters):
# # #     "function_docstring"
# # #     function_suite
# # #     return [expression]

# # # def print_something([formal_args], *var_args_tuple):
# # #     "function_docstring"
# # #     function_suite
# # #     return [expression]

# # # # write a program that reads a number and dislays its value inside a function

# # # def display(num):
# # #     print(num)

# # # dislay(num)

# # # # add two numbers using a fucntion 

# # # def add_two(a, b):
# # #     return a + b

# # # x = 10

# # # def func(x):
# # #     x = 20
# # #     print(x)

# # # func(x)
# # # print(x)

# # # # write a program that takes a list as a parameter and displayed each value in the list

# # # num = [1,2,3,4]
# # # def list_func(num):
# # #     for i in num:
# # #         print(i)

# # # list_func(num)

# # def changeme(mylist):
# #     mylist.append([1,2,3,4])
# #     print('Values inside the function: ', mylist)

# # mylist = [10,20,30]
# # changeme(mylist)
# # print('Values outside the function: ', mylist)

# # # function that rad a list of numnber and displays odd and even numbers

# def read_nums(num):
#     num = input('Enter' + str(n) + 'numbers: ').split(',')
#     num = [int(i) for i in num]

# def even_odd(num):
#     num = read_nums(num)
#     for i in num:
#         if i % 2 == 0:
#             print(i, 'is even')
#         else:
#             print(i, 'is odd')

# even_odd(10)

# def printinfo(name, age):
#     print('Name: ', name)
#     print('Age: ', age)

# printinfo(age=23, name='Isha')
# printinfo(23, 'Isha')

# write a function to add n numbers

def add_n_numbers(*nums):
    return sum(nums)

print(add_n_numbers(1,2,3,45))
print(add_n_numbers(4,2))