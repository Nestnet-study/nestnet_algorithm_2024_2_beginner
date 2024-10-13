max = 0
order = 0

for i in range(9):
    i = i+1
    a = int(input()) #input 입력값은 문자열이기때문에 max와 비교하기 위해서는 정수형으로 변환해주어야함
    if a > max:
        max = a
        order = i
    
print(max)
print(order)