a=int(input())
for i in range(a):
    cnt=0
    b=input()
    fnt=0
    if b[0]=='O':
        fnt=1
        cnt+=1
    for j in range(1,len(b)):
        if fnt!=0 and b[j]=='O':
            fnt+=1
            cnt+=fnt
        elif fnt==0 and b[j]=='O':
            fnt=1
            cnt+=fnt
        else:   fnt=0
    print(cnt)