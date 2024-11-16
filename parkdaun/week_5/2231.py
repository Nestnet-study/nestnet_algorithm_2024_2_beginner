# 2231 : 분해합
n = int(input())


result = 0
for i in range(1, n + 1):
    if i + sum(map(int, str(i))) == n:
        result = i
        break

print(result)
