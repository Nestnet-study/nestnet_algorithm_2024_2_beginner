# 1010번 문제

T = int(input())

num = []
for i in range(T):
    num.append(list(map(int, input().split())))

for i in range(T):
    n = num[i][0]
    m = num[i][1]
    result = 1
    
    for j in range(n):
        result *= m-j
        result /= j+1
    print(int(result))