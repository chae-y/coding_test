import sys

def binary_search(start,end):
    global result
    mid=(start+end)//2
    post=arr[0]
    cnt=1
    for x in arr[1:]:
        if x-post>=mid:
            cnt+=1
            post=x
        else: continue
    if cnt>=c:
        result=mid
        if start>=end:
            print(result)
            return
        binary_search(mid+1,end)
    else:
        binary_search(start,mid-1)
    return

n,c= map(int,sys.stdin.readline().split())
arr=[int(sys.stdin.readline()) for _ in range(n)]

arr.sort()

result=0
binary_search(1,arr[-1]-arr[0]) 
