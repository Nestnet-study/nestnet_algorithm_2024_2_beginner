#거울상인지 확인

def mirror(text, rev):
    return text == rev

# 테스트 케이스 수 입력
n = int(input())

for _ in range(n):
    # 각 테스트 케이스에서 문자열 입력
    text1, text2 = input().split()
    
    # 문자열을 뒤집기
    rev_text2 = text2[::-1]  # 두 번째 문자열을 역순으로 뒤집음

    # 거울상 확인
    if mirror(text1, rev_text2):
        print("Possible")
    else:
        print("Impossible")
