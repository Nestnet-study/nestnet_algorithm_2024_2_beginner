#중복값이 몇개인지! 
    #다만 6이랑 9는 2개일 때 1개씩 늘어남

from collections import Counter

#선언
def count_room_numbers(num):
    # 숫자를 문자열로 변환하여 Counter를 사용
    counter = Counter(str(num))

    # 6과 9의 개수를 합산하여 처리
    six_nine_count = counter.get('6', 0) + counter.get('9', 0)

    # 6과 9의 개수를 반올림하여 1개의 방(6에 저장)으로 계산
    counter['6'] = (six_nine_count + 1) // 2

    # 필요 방의 수는 최대값
    return max(counter.values())

# 입력
room_number = int(input())
print(count_room_numbers(room_number))
