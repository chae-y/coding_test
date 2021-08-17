import sys

n,k= map(int,sys.stdin.readline().split())

cnt=0
num=sys.stdin.readline().rstrip()

stk=[num[0]]
for x in num[1:]:
    while stk and stk[-1]<x and cnt<k:
        stk.pop()
        cnt+=1
    stk.append(x)


for x in stk[:len(stk)+cnt-k]:
    print(x,end="")