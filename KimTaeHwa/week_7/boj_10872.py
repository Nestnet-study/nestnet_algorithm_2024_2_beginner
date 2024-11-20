# 팩토리얼
# 함수 잘 쓰자

def factorial(b) :
    if b == 0:
        return 1
    else:
        return b*factorial(b-1)
    
a = int(input())

print(factorial(a))