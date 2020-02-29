a,b,c,d = int(input().split(" "))

if (a == c):
    s = abs(b-d)
    s = s+a
    print("%d %d %d %d" %(s, b, s, d))

elif (b == d):
    s = abs(c-a)
    s = s+b
    print("%d %d %d %d" %(a, s, c, s))

elif 