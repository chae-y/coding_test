import sys

def game(x,s,b):
    for i in range(123,1000):
        if not arr[i]: continue
        ss=0
        bb=0
        temp=str(i)
        for j in range(3):
            for k in range(3):
                if x[j]==temp[k]:
                    if j==k: ss+=1
                    else: bb+=1
        if not(ss==s and bb==b):
            arr[i]=False
    return 0

arr=[True]*1000
for i in range(123,1000):
    temp=str(i)
    if temp[0]==temp[1] or temp[1]==temp[2] or temp[2]==temp[0]:
        arr[i]=False
    if temp[0]=='0' or temp[1]=='0' or temp[2]=='0':
        arr[i]=False

n=int(sys.stdin.readline())
for i in range(n):
    num,strike,ball=map(int,sys.stdin.readline().split())
    game(str(num),strike,ball)

cnt=0
for i in range(123,1000):
    if arr[i]: cnt+=1

print(cnt)