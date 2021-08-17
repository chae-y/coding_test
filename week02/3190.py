import sys
from collections import deque

n=int(sys.stdin.readline())
k=int(sys.stdin.readline())
apple=[tuple(map(int,sys.stdin.readline().split())) for _ in range(k)]
l=int(sys.stdin.readline())
snake=[]
for _ in range(l):
    x,c=sys.stdin.readline().split()
    snake.append((int(x),-1 if c=="L" else 1))


dx=[1,0,-1,0]
dy=[0,1,0,-1] #우,하,좌,상

queue=deque()
queue.append((0,0))
d=0
x=0
y=0
time=0
die=False

for s in snake:
    for i in range(s[0]-time):
        print(d,"ds")
        x=x+dx[d]
        y=y+dy[d]
        time+=1

        #죽는 조건
        if (x,y) in queue:
            die=True
            break
        if x<0 or x>=n:
            die=True
            break
        if y<0 or y>=n:
            die=True
            break

        if (y+1,x+1) in apple:
            apple.remove((y+1,x+1))
        else:
            queue.popleft()

        queue.append((x,y))
        
    if die:
        break
    d+=s[1]
    if d<0: d+=4
    if d>=4: d-=4

while not die:
    x=x+dx[d]
    y=y+dy[d]
    time+=1

    #죽는 조건
    if (x,y) in queue:
        die=True
        break
    if x<0 or x>=n:
        die=True
        break
    if y<0 or y>=n:
        die=True
        break

    if (y+1,x+1) in apple:
        apple.remove((y+1,x+1))
    else:
        queue.popleft()

    queue.append((x,y))

print(time)