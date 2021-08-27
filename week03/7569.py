from collections import deque
import sys

dx = [0, 0, 0, 0, 1, -1]
dy = [0, 0, 1, -1, 0, 0]
dz = [1, -1, 0, 0, 0, 0]

n, m, h = map(int, sys.stdin.readline().split())

arr = [[list(map(int,sys.stdin.readline().split())) for _ in range(m)] for _ in range(h) ]

mature=deque()
no_tomato=0
immature=0

for i in range(h):
    for j in range(m):
        for k in range(n):
            if arr[i][j][k] == 1:
                mature.append((i, j, k, 0))
            elif arr[i][j][k] == 0:
                immature += 1

result=0
while immature > 0 and mature:
    z, y, x, day = mature.popleft()
    for i in range(6):
        next_x = x + dx[i]
        next_y = y + dy[i]
        next_z = z + dz[i]
        if next_x < 0 or next_x >=n:
            continue
        if next_y< 0 or next_y >= m:
            continue
        if next_z< 0 or next_z >= h:
            continue
        if arr[next_z][next_y][next_x] == 0:
            result = day+1
            arr[next_z][next_y][next_x] = 1
            mature.append((next_z, next_y, next_x, day+1))
            immature -= 1


if immature == 0:
    print(result)
else: print(-1)
