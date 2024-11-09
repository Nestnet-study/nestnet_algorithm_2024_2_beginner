# 1193 분수찾기

x=int(input())
i=1

while(x > 0):
    y=x
    x=x-i
    i=i+1

if((i%2)==0):
    i=i-y
    print(i,'/',y,sep='')  
else:
    i=i-y
    print(y,'/',i,sep='')