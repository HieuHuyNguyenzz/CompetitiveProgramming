k, n, i, j, s = [int(x) for x in input().strip().split()]

matrices = []

for _ in range(k):
    mtx = []
    for g in range(n):
        row = [int(x) for x in input().strip().split()]
        mtx.append(row)
    matrices.append(mtx)

row = matrices[0][i-1]

for mtx in range(1, k):
    res = [0 for _ in range(n)]
    for i1 in range(n):
        for i2 in range(n):
            res[i1] += row[i2] * matrices[mtx][i2][i1]
            res[i1] %= s
            
    row = res

print(row[j-1])
