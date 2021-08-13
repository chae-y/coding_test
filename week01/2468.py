import sys
sys.setrecursionlimit(10000)

def anjeon(x,y,c,h):
    global cnt
    cnt[x][y]=c
    dx=[0,0,1,-1]
    dy=[-1,1,0,0]
    for k in range(4):
        next_x=dx[k]+x
        next_y=dy[k]+y
        if next_x<0 or next_x>=n: continue
        if next_y<0 or next_y>=n: continue
        if arr[next_x][next_y]<=h: continue
        if cnt[next_x][next_y]!=-1: continue
        anjeon(next_x,next_y,c,h)
    return

n= int(sys.stdin.readline())
arr = [list(map(int,sys.stdin.readline().split())) for _ in range(n)]

height=[]
for i in range(n):
    height+=arr[i]
height=set(height)

result=0

# cnt=[[-1]*n]*n
for k in height:
    cnt = [[-1]*n for _ in range(n)]
    count=0
    for i in range(n):
        for j in range(n):
            if arr[i][j]<=k: continue
            if cnt[i][j]!=-1: continue
            anjeon(i,j,count,k)
            count+=1
    result=max(count,result)

print(result)