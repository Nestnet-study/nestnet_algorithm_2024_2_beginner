array = []
read = []

for _ in range(5):
    array.append(list(input()))

for i in range(15):
    for j in range(5):
        if i < len(array[j]):
            read.append(array[j][i])
        
for l in read:
    for n in l:
        print(n, end ='')