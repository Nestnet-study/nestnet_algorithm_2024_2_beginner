# abc 값 입력
a,b,c = int(input()), int(input()), int(input())
gap = a*b*c
#print(gap)

#변환
num_list = list(str(gap))

#리스트 초기화
r_list = [0 for i in range(10)]

for digit in num_list:
    r_list[int(digit)]+=1

for r in r_list:
    print(r)