import sys
from collections import deque

n, m = map(int, sys.stdin.readline().split())
arr = [[] for _ in range(n+1)]
degree=[0]*(n+1)
for _ in range(m):
    a, b = map(int, sys.stdin.readline().split())
    arr[a].append(b)
    degree[b]+=1

queue = deque()
for i in range(1, n+1):
    if degree[i]==0:
        queue.append(i)

while queue:
    now = queue.popleft()
    print(now, end=" ")
    for i in arr[now]:
        degree[i] -= 1
        if degree[i]==0:
            queue.append(i)