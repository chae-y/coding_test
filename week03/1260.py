import sys
from collections import deque

def dfs(now):
    global visited
    print(now, end=" ")
    visited[now] = True
    for x in arr[now]:
        if not visited[x]:
            dfs(x)
    return 0

def bfs(start):
    global visited
    queue=deque()
    queue.append(start)
    visited[start] = True
    while queue:
        now=queue.popleft()
        print(now, end=" ")
        for x in arr[now]:
            if not visited[x]:
                queue.append(x)
                visited[x]=True
        
    return 0

n,m,v = map(int,sys.stdin.readline().split())

arr = [[] for _ in range(n+1)]

for _ in range(m):
    a,b = map(int,sys.stdin.readline().split())
    arr[a].append(b)
    arr[b].append(a)

for i in range(n+1):
    arr[i].sort()
    print(arr[i])

visited = [False for _ in range(n+1)]
dfs(v)
print()
visited = [False for _ in range(n+1)]
bfs(v)
