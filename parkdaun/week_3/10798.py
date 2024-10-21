# 세로 읽기

# 5개의 문자열을 저장할 리스트
a = [input() for _ in range(5)]

# 최대 문자열 찾기
max_length = max(len(s) for s in a)

# 세로로 읽어서 출력
for i in range(max_length):
    for j in range(5):
        if i < len(a[j]):
            print(a[j][i], end='')
    