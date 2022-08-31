# 50. Pow(x, n)

def myPow(x, n):
    if n == 0:
        return 1
    if n < 0:
        return 1 / myPow(x, -n)
    if n % 2 == 0:
        return myPow(x * x, n // 2)
    else:
        return x * myPow(x * x, n // 2)


x = 2.1
n = 3
print(myPow(x, n))