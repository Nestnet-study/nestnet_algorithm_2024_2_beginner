#2231 분해합

N = int(input())
i=1

while True:
    if i+sum(map(int, str(i)))==N:
        print(i)
        break
    if i==N: # 분해합의 생성자가 없을 경우
        print(0)
        break
    i+=1