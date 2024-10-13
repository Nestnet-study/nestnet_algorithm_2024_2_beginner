#최댓값 출력

#9개의 수 입력
number = [int(input()) for _ in range(9)]

# max 함수를 사용하여 number 속 최댓값 저장
max_value = max(number)
#index 함수를 사용하여 number 속 최댓값의 위치 저장
    # (처음이 1이 아닌 0이므로 1 +)
max_index = number.index(max_value) + 1

print(max_value)
print(max_index)