import sys

def f(start,end):
    global result
    if start>=end:
        mid=(start+end)//2
        temp=0
        for x in arr:
            if x-mid>0:
                temp+=(x-mid)
        if temp>=m:
            result=mid
        print(result)
        return
    mid=(start+end)//2
    temp=0
    for x in arr:
        if x-mid>0:
            temp+=(x-mid)
    if temp>=m:
        result=mid
        f(mid+1,end)
    else:
        f(start,mid-1)
    return

n,m=map(int,sys.stdin.readline().split())

arr=list(map(int,sys.stdin.readline().split()))

max_height=max(arr)

result=0
f(0,max_height)