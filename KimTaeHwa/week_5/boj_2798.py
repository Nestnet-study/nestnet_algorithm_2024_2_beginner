# 백준 2798

n,m = map(int,input().split())
num_list = list(map(int,input().split()))
result = 0

for i in range(n):
    for k in range(i+1, n):
        for j in range(k+1, n):
            if num_list[i] + num_list[k] + num_list[j] > m:
                continue
            else:
                if result < num_list[i] + num_list[k] + num_list[j]:
                    result = num_list[i] + num_list[k] + num_list[j]

print(result)