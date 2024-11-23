def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

def binomial(n, k):
    from math import factorial
    return factorial(n) // (factorial(k) * factorial(n - k))

n, k = map(int, input().split())
result = binomial(n, k)
print(result)
