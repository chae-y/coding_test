import sys
from collections import deque

n,k =  map(int,sys.stdin.readline().split())
arr = [int(sys.stdin.readline()) for _ in range(n)]

arr.sort()

queue = deque()
queue.append((k, 0))
visited = dict()

result = -1

while queue and result==-1:
    now, cnt = queue.popleft()

    for x in arr:
        new = now-x
        if new in visited:
            continue
        elif new < 0:
            break
        elif new==0:
            result=cnt+1
            break
        else:
            visited[new]=1
            queue.append((now-x, cnt+1))

print(result)