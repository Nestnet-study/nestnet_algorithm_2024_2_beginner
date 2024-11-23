#2587 대표값2

num=[]

for i in range(5):
    num.append(int(input())) # 입력받은 숫자를 리스트에 추가

num.sort()
print(sum(num)//5)
print(num[2])