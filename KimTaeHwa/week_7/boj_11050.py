# 어항 계수 1

def factorial(n): #n! 계산
    if n == 0:
        return 1
    else:
        return n*factorial(n-1)

a, b = map(int, input().split())

print(factorial(a)//(factorial(b)*(factorial(a-b))))