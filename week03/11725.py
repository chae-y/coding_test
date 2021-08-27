from collections import deque
import sys

n = int(sys.stdin.readline())
arr=[[] for _ in range(n)]
result=[-1]*n

for _ in range(n - 1):
    a, b = map(int, sys.stdin.readline().split())
    arr[a-1].append(b-1)
    arr[b-1].append(a-1)

queue=deque()

queue.append(0)
while queue:
    now=queue.popleft()
    for x in arr[now]:
        if result[x] == -1:
            result[x]=now+1
            queue.append(x)

for i in range(1,n):
    print(result[i])