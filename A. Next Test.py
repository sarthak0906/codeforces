n = int(input())
l = list(map(int,input().split()))
l.sort()
f = 0
if l[0] != 1:
	print(1)
	f = 1
else:
	for i in range(n-1):
		if ((l[i] + 1) != (l[i+1])):
			print(l[i]+1)
			f = 1
			break
if f == 0:
    print(l[n-1]+1)