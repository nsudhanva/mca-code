limit = int(input('Enter the limit: '))

matrix_1 = []
matrix_2 = []
sum_result = [[0 for i in range(limit)], [0 for i in range(limit)]]
diff_result = [[0 for i in range(limit)], [0 for i in range(limit)]]

print('Enter matrix 1 elements: ')
for i in range(limit):
    sub_mat = list(input('Enter row ' + str(i) + ' elements (csv): ').replace(' ', '').split(','))
    sub_mat = [int(i) for i in sub_mat]
    matrix_1.append(sub_mat)

print('Enter matrix 2 elements: ')
for i in range(limit):
    sub_mat = list(input('Enter row ' + str(i) + ' elements (csv): ').replace(' ', '').split(','))
    sub_mat = [int(i) for i in sub_mat]
    matrix_2.append(sub_mat)

for i in range(len(matrix_1)):
   for j in range(len(matrix_2[0])):
       sum_result[i][j] = matrix_1[i][j] + matrix_2[i][j]
       diff_result[i][j] = matrix_1[i][j] - matrix_2[i][j]

print('Sum: ')
for i in sum_result:
    print(i)

print('Diff: ')
for i in diff_result:
    print(i)
