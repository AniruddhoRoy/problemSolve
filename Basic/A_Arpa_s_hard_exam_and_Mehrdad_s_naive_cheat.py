a = int(input())
# arr = [[(8**v)%10,v] for v in range(0,20)]
# print(arr)
if a==0:
    print(1)
elif a%4==1:
    print(8)
elif a%4==2:
    print(4)
elif a%4==3:
    print(2)
elif a%4==0:
    print(6)