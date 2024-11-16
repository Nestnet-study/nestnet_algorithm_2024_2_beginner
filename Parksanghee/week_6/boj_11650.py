#11650 좌표 정렬하기

N=int(input())
coordinate=[]

for i in range(N):
    coordinate.append(list(map(int,input().split())))

# 내장 정렬 사용: x 기준 정렬, x가 같으면 y 기준 정렬
coordinate.sort(key=lambda x: (x[0], x[1]))

for x, y in coordinate:
    print(x, y)