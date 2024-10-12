A=[]

for i in range(9):
    num = int(input())
    A.append(num)

print(max(A))
print(A.index(max(A))+1)