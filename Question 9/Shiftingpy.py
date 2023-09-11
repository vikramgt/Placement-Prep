def shift(ch,a):
    if ch==1:
        d=int(input("How many times should it shift to left: "))
        for i in range (d):
            a.append(a[0])
            del a[0]
    elif ch==2:
        d=int(input("How many times should it shift to right: "))
        for i in range (d):
            a.insert(0,a[len(a)-1])
            del a[len(a)-1]
    return a

a=[1,2,3,4,5]
ch=int(input("Shift 1) left or 2) right (enter 1 or 2) : "))
b=shift(ch,a)
print(b)
