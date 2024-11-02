n = int(input())

if n == 1:
    print(0)
else:
    x = 1  
    i = 1  
    while n > x:
        x += 6 * i  
        i += 1  

    print(i)
