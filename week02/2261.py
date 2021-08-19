import sys
inf=10000000000

def dis(x,y):
    return (x[0]-y[0])**2+(x[1]-y[1])**2

def solve(left,right): 
    if left==right:
        return inf

    if right-left==1:
        return dis(arr[right],arr[left])
    
    mid=(left+right)//2
    minDis=min(solve(left,mid-1),solve(mid+1,right))

    target=[]
    for dot in arr[left:right+1]:
        if(arr[mid][0]-dot[0])**2<minDis:
            target.append(dot)

    target.sort(key=lambda x:x[1])
    for i in range(len(target)-1):
        for j in range(i+1,len(target)):
            if (target[i][1]-target[j][1])**2<minDis:
                minDis=min(minDis,dis(target[j],target[i]))
            else:
                break
    return minDis

n=int(sys.stdin.readline())
arr=[tuple(map(int,sys.stdin.readline().split())) for _ in range(n)]

arr.sort()

print(solve(0,n-1))