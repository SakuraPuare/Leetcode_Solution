def diagonalSum(mat):
    ans = 0
    for i in range(len(mat)):
        ans += mat[i][i]
        ans += mat[i][len(mat) - 1 - i]
    if len(mat) % 2 == 0:
        return ans
    else:
        return ans - mat[len(mat) // 2][len(mat) // 2]


mat = [[1, 2, 3],
       [4, 5, 6],
       [7, 8, 9]]
print(diagonalSum(mat))
