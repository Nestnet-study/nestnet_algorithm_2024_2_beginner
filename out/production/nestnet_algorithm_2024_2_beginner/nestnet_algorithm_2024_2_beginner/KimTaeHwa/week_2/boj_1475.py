import math
# 방 번호 입력

N = input()

#### 방번호를 dic에 삽입 ####

dic = {str(i) : 0 for i in range(10)}

for i in N:
    if i in dic:
        dic[i] +=1
    else:
        dic[i] = 1
        
# print(dic.items())

#### 6과 9를 처리하는 logic ####
six = dic.get('6')
nine = dic.get('9')
sum = six + nine
del dic['6']
del dic['9'] #아예 6과 9를 빼서 처리해버리기, 진작에 이렇게 할걸

if(sum <= max(dic.values())):
    print(max(dic.values()))
elif(sum % 2 == 0 ):
    print(int(sum / 2))
else:
    print(int(math.ceil(sum/2)))

# print(dic.items(), six, nine)

#나눗셈 연산시 float형이니까 정수형으로 나와야 되면 int로 변환해주기

# print(max(dic.values()))
# print(int(sum/2))
# print(int(math.ceil(sum/2)))