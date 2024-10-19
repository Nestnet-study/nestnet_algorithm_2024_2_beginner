#두 행렬의 합

#행렬의 크기 입력
n, m = map(int, input().split())

# 행렬 생성 // n개의 행 생성(m은 상관 x)
A = [list(map(int, input().split())) for _ in range(n)]
B = [list(map(int, input().split())) for _ in range(n)]

# 행렬 초기화 
result = [[0]*m for _ in range(n)]

for i in range(n):
    for j in range(m):
        result[i][j] = A[i][j]+B[i][j]

for row in result:
    print(' '.join(map(str,row)))