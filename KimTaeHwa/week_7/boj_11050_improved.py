def bino_coef(n, k):
    if k > n:
        return 0
    if k == 0 or k == n:
        return 1

    result = 1
    for i in range(1, k+1):
        result = result * (n - i + 1) // i
    return result


# 입력 받기
a, b = map(int, input().split())

# 결과 출력
print(bino_coef(a, b))
