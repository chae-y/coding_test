import sys
sys.setrecursionlimit(10**5)

dx=[0,0,1,-1]
dy=[1,-1,0,0]

def findStart():
    global startX, startY
    find=False
    for i in range(n):
        for j in range(m):
            if arr[i][j] > 0:
                startX=i
                startY=j
                find=True
                break
        if find: break
    return find

def melt(x,y):
    global visited,cnt
    visited[x][y]=1
    for i in range(4):
        next_x = x + dx[i]
        next_y = y + dy[i]
        if next_x<0 or next_x>=n:
            continue
        if next_y<0 or next_y>=m:
            continue
        if visited[next_x][next_y]==1:
            continue
        if arr[next_x][next_y]<=0:
            arr[x][y]-=1
        else:
            melt(next_x, next_y)