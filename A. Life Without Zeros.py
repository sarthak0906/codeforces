a = input()
b = input()

c = a.replace('0','')
d = b.replace('0','')

#print (a,b,c,d)
e = str(int(a) + int(b))
#e = e + ''
e = e.replace('0','')
f = str(int(c) + int(d))
if e == f:
    print("YES")
else :
    print("NO")