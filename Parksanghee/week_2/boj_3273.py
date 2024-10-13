n = int(input())
arr = list(map(int, input().split()))
x = int(input())

pair_count = 0
num_count = {}

for num in arr:
    complement = x - num
    if complement in num_count:
        pair_count += num_count[complement]
    
    if num in num_count:
        num_count[num] += 1
    else:
        num_count[num] = 1

print(pair_count)