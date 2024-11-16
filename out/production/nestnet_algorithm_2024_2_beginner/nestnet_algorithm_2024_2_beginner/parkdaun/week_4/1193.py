n = int(input())

# n=1 -> 1/1 처리
if n == 1:
    print("1/1")
else:
    x = 0
    i = 1

    while x < n:
        y = x
        x += i
        i += 1

    po_li = n - y  
    total = i - 1  

    if total % 2 == 0:  
        bunmo = po_li
        bunga = total + 1 - po_li
    else:  
        bunga = po_li
        bunmo = total + 1 - po_li

    print(f"{bunga}/{bunmo}")
