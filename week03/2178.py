from collections import deque
import sys

dx = [0,0,1,-1]
dy = [1,-1,0,0]

n,m=map(int,sys.stdin.readline().split())

map=[sys.stdin.readline() for _ in range(n)]

result=999999999
visited=[[0]*m for _ in range(n)]

queue=deque()
queue.append((0,0))
visited[0][0]=1

while queue:
    now = queue.popleft()
    x = now[0]
    y = now[1]

    for i in range(4):
        next_x = x+dx[i]
        next_y = y+dy[i]
        if next_x < 0 or next_x >=n:
            continue
        if next_y< 0 or next_y >= m:
            continue
        if visited[next_x][next_y]:
            continue
        if map[next_x][next_y] == '0':
            continue
        visited[next_x][next_y] = max(visited[next_x][next_y], visited[x][y]+1)
        queue.append((next_x, next_y))

print(visited[n-1][m-1])