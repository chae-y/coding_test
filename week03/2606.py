import sys
from collections import deque

n = int(sys.stdin.readline())
m = int(sys.stdin.readline())
arr = [ [] for _ in range(n+1)]
for _ in range(m):
    a,b = map(int,sys.stdin.readline().split())
    arr[a].append(b)
    arr[b].append(a)

visited = [0 for _ in range(n+1)]

queue = deque()
queue.append(1)
visited[1] = 1

while queue:
    now = queue.popleft()
    for x in arr[now]:
        if not visited[x]:
            queue.append(x)
            visited[x]=1

print(sum(visited)-1)