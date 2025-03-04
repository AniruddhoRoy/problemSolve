t = int(input())
arr = list(set([180-(360//v) for v in range(3,361) if 360%v==0] ))
# print(arr)
for i in range(0,t):
    a = int(input())
    if a in arr:
        print("YES")
    else:
        print("NO")