# 25305번 커트라인

arr = list(input().split())
score = list(map(int,input().split()))

score.sort(reverse=True)

print(score[int(arr[1])-1])

#map으로 리스트안의 값을 정수로 바꿔줘야지 정상으로 정렬됨
#문자열로 정렬하게 될경우 예제 입력시 ['98', '93', '85', '76', '100'] 100이 뒤로가게된다