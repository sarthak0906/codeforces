n = input()
ans = 0
sum = 0
if int(n) < 10:
    print(0)
else :
    while 1:
        for i in n:
            sum += int(i)
        ans += 1
        if (sum < 10):
            print(ans)
            break
        n = str(sum)
        sum = 0