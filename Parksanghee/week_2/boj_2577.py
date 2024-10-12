# 2577번 문제

A = int(input())
B = int(input())
C = int(input())

ABCmul = str(A * B * C)

num_count = [0] * 10

for i in range(10):
    num_count[i] = ABCmul.count(str(i))


print(*num_count, sep="\n")