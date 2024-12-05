def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

def permutation(n, k):
    from math import factorial
    return factorial(n) // (factorial(k) * factorial(n - k))

t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    result = permutation(m, n)
    print(result)
