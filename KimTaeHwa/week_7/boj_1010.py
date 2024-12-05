# 다리놓기

def factorial(n): #n! 계산
    if n == 0:
        return 1
    else:
        return n*factorial(n-1)

a = int(input())

for i in range(a):
    n, m = map(int, input().split())
    print(factorial(m)//(factorial(m-n)*factorial(n)))