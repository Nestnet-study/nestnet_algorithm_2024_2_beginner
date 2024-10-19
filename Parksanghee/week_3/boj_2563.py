num = int(input())
position = []

for _ in range(num):
    position.append(list(map(int,input().split())))

rows = 100
cols = 100
arr = [[0 for j in range(cols)] for i in range(rows)]


for i in range(num):
    x = position[i][0]
    y = position[i][1]
    
    for j in range(10):
        for k in range(10):
            arr[x+j][y+k] = 1

area = 0

for i in range(100):
    area += arr[i].count(1)

print(area)