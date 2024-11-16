#2798 블랙잭

N, M = map(int, input().split())

card_list=list(map(int, input().split()))
result_list=[]

for i in range(len(card_list)):
    for j in range(i+1, len(card_list)):
        for k in range(j+1, len(card_list)):
            if card_list[i]+card_list[j]+card_list[k]<=M: # 카드 3개의 합이 M보다 작거나 같을 때만 리스트에 추가
                result_list.append(card_list[i]+card_list[j]+card_list[k])
    
print(max(result_list))