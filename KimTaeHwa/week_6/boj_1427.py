# 1427번 소트인사이드

num = list(input())

num.sort(reverse=True)

for i in range(len(num)):
    print(num[i], end="")