a=int(input())
for i in range(a):
    cnt=0
    b=input()
    fnt=0
    for j in range(len(b)):
        if b[j]=='O':
            fnt+=1
            cnt+=fnt
        else:   fnt=0
    print(cnt)