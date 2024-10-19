#1475 번 문제 

num = list(map(int, input()))
num_count  = [0]*10

for i in range(10):
    if i == 9:
        num_count[6] += num.count(i)
    else:
        num_count[i] = num.count(i)

num_count[6] = (num_count[6]+1)//2

print(max(num_count))