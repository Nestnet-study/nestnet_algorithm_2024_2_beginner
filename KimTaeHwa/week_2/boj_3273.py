n = int(input())  # 배열의 크기
arr = list(map(int, input().split()))  # 배열의 요소들
x = int(input())  # 합이 되어야 할 값

num_dict = {}
count = 0

# 배열을 순회하면서 두 수의 합을 계산
for num in arr:
    target = x - num  # 현재 숫자와 더해서 x가 되는 수

    # target이 이미 딕셔너리에 있으면 카운트 증가
    if target in num_dict:
        count += num_dict[target]
    
    # 현재 숫자를 딕셔너리에 추가
    if num in num_dict:
        num_dict[num] += 1
    else:
        num_dict[num] = 1

print(count)
