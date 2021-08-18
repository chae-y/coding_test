import sys

n=int(sys.stdin.readline())
arr=[]
for _ in range(n):
    x,r=map(int,sys.stdin.readline().split())
    arr.append((x-r,1))#왼쪽
    arr.append((x+r,0))#오른쪽

arr.sort(key=lambda x:(x[0],x[1]))

stk=[]
cnt=1
now=-1
for i in range(len(arr)):
    if arr[i][1]==1:
        stk.append((1,arr[i][0]))
    elif arr[i][1]==0:
        pop=stk.pop()
        wid=0
        while pop[0]==2:
            wid+=pop[1]
            pop=stk.pop()
        if wid!=0 and pop[1]-arr[i][0]==wid:
            cnt+=1
        stk.append((2,pop[1]-arr[i][0]))
        cnt+=1

print(cnt)