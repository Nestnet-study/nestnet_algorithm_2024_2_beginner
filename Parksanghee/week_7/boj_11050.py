# 11050번

N, K= map(int, input().split())

def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)
    
if K>N:
    print(0)
elif K<0:
    print(0)
else:
    binomial = factorial(N) // (factorial(K) * factorial(N-K))
    
print(binomial)