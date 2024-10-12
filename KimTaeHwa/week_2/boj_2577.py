# 파이썬 레전드 단축키 Alt + shift + DownArrow
A = int(input())
B = int(input())
C = int(input())

# 계산하기
result = A * B * C
# print(result)

# 숫자를 문자열로 변환
result_str = str(result)

# dic = {0: 0, 1: 1, 2: 1, 3: 1, 4: 1, 5: 1, 6: 1, 7: 1, 8: 1, 9: 1,} #빈 딕셔너리 집합 생성하고
# 처음에는 위에처럼 하려고 했는데 이건 파이썬이잖아
dic = {str(i) : 0 for i in range(10)} #캬~

# 파이썬은 변수선언이 필요없어서 좋(?)은진 모르겠고 편하네 
# dic의 value의 default value 는 1이기때문에 else에서 1로 설정
for word in result_str:
    if word in dic:
        dic[word] +=1
    else:
        dic[word] = 1

#print(dic.items())
        
for key, value in dic.items():
  print(dic[key])
    