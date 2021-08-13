import sys

def move(now, depth):
    global cost, result, visited
    if depth==n:
        if arr[now][0]>0: #다시 원래대로 돌아가야 하니까
            result=min(result,cost+arr[now][0])
        return

    visited[now]=True
    for x in range(n):
        if not visited[x] and arr[now][x]!=0:
            cost+= arr[now][x]
            move(x, depth+1)
            cost-= arr[now][x]
    visited[now]=False

    return

n = int(sys.stdin.readline())
arr=[list(map(int,sys.stdin.readline().split())) for _ in range(n)]
visited=[False]*n
cost=0
result=10*1000001

move(0,1)
print(result)