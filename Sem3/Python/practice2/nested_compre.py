x = [[1, 2], [3, 4], [5, 6]]

print(x)

res = [[x[j][i] for j in range(len(x))] for i in range(len(x[0]))]

print(res)
