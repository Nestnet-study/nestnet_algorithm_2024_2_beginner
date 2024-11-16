# 2587번 대표값2

arr = []
sum = 0


for i in range(5):
    arr.append(int(input()))
    
for i in range(5):
    sum += int(arr[i])

arr.sort()
    
print(int(sum/5))    
print(arr[2])