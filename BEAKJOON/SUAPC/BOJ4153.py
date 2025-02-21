#직각삼각형
while True:
    num = list(map(int,input().split()))
    if sum(num) == 0:
        break
    max1 = max(num)
    num.remove(max1)
    if num[0]**2 + num[1]**2 == max1**2:
        print('right')
    else:
        print('wrong')