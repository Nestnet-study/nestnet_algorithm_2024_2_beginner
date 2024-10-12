#딕셔너리 이용해보기

word = input().strip().upper()

#print(word)

dic = {}

for Alp in word: #파이썬에서는 문자열은 Iterable object이기 때문에 한문자씩 읽을수 있음 우와~
    if Alp in dic:
        dic[Alp] +=1
    else:
        dic[Alp] = 1
        
#딕셔너리에서 가장 높은 숫자 찾기 , 같으면 -> ?

max_count = 0
ans = "?"

#print(dic.keys())
#print(dic.item()) 우리는 빈도수는 필요 없으니까 dic의 value값이랑 비교해서 key만 뽑아내면 되지 않을까?
#items( )을 사용해서 그냥 key값을 주는게 효율적이다 고집부리지 말자~
for key, count in dic.items():
    if count > max_count:
        max_count = count
        ans = key
    elif count == max_count:
        ans = "?"
        
print(ans) 
#print(dic)
#print(max_count)