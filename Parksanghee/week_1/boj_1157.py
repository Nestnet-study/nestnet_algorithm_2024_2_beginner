import sys

word = list(input())
num = [0] * 26

for i in range(len(word)):
    for j in range(26):
        if word[i] == chr(97+j) or word[i] == chr(65+j):
            num[j] += 1 
maxn=max(num)
num1 = 0

for k in range(26):
    if maxn == num[k]:
        num1 += 1

if num1 >= 2 :
    print("?")
    sys.exit()
else:
    num2=num.index(maxn)
    char = chr(65+num2)

print(char)