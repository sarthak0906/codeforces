s1 = input()
s2 = input()

for i in s2:
    if (i == " "):
        continue
    if( i in s1):
        s1.replace(i,"")
    else:
        print("NO")
        exit()

print("YES")