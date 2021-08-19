import sys

sys.setrecursionlimit(10**5)

def hist(left,right):
    if left==right:
        return arr[left]
    mid = (left+right)//2

    tempHeight=min(arr[mid],arr[mid+1])
    tempArea=2*tempHeight

    l,r=mid,mid+1

    while left<l or r<right:
        if r<right and (l==left or arr[l-1]<arr[r+1]):
            r+=1
            tempHeight=min(tempHeight,arr[r])
        else:
            l-=1
            tempHeight=min(tempHeight,arr[l])
        tempArea=max(tempArea,tempHeight*(r-l+1))

    return max(hist(left,mid),hist(mid+1,right),tempArea)

arr=list(map(int,sys.stdin.readline().split()))
while arr[0]!=0:
    print(hist(1,arr[0]))
    arr=list(map(int,sys.stdin.readline().split()))