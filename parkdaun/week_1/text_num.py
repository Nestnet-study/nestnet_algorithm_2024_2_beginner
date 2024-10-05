#단어 속 가장 많이 사용한 문자 찾기

#collections 의 Counter 사용
from collections import Counter

#입력 단어 모두 대문자로 변환 -> 대소문자를 따로 구분하기 때문
text = input().upper()

#알파벳 빈도 계산
counter = Counter(text)

#가장 많이 사용된 알파벳과 빈도 찾기
most_common = counter.most_common()

# 결과가 여러개 = ? // 아니면 최댓값 출력
if len(most_common) > 1 and most_common[0][1]==most_common[1][1]:
    print("?")
else:
    print(most_common[0][0])
