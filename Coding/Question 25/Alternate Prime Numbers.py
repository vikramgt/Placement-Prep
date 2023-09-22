c=0
for i in range (300,600,1):
    p=0
    for j in range (2,(i//2)+1):
        if(i%j==0):
            p=1
    if(p==0):
        c+=1
        if(c%2==0):
            print(i)