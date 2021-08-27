from collections import deque
import sys

dx = [0,0,1,-1]
dy = [1,-1,0,0]

r, c = map(int,sys.stdin.readline().split())
map = [list(sys.stdin.readline()) for _ in range(r)]
queue = deque()
water = []

for i in range(r):
    for j in range(c):
        if map[i][j] == 'D':
            goal = (i,j)
        elif map[i][j] == 'S':
            dochi = (i,j,0)
        elif map[i][j] == '*':
            water.append((i,j))
queue.append(dochi)
queue+=water

arrive = False
result = 0
while queue:
    now = queue.popleft()
    y = now[0]
    x = now[1]
   
    if map[y][x] == 'S':
        map[y][x] = '.'
        for i in range(4):
            next_y = y + dy[i]
            next_x = x + dx[i]
            
            if (next_y, next_x) == goal:
                result = now[2]+1
                arrive = True
                break 
            if -1 < next_x < c and -1 < next_y < r:
                if map[next_y][next_x] == '.':
                    map[next_y][next_x] = 'S'
                    queue.append((next_y, next_x, now[2]+1))
    else:
        for i in range(4):
            next_y = y + dy[i]
            next_x = x + dx[i]

            if -1 < next_x < c and -1 < next_y < r:
                if map[next_y][next_x] == '.' or map[next_y][next_x] == 'S':
                    map[next_y][next_x] = '*'
                    queue.append((next_y, next_x))
    if arrive:
        break

if arrive:
    print(result)
else:
    print("KAKTUS")
