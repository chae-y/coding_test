import sys

n= int(sys.stdin.readline())
front=-1
rear=-1
queue=[]

for _ in range(n):
    txt=sys.stdin.readline().rstrip().split()
    if txt[0]=="push":
        rear+=1
        queue.append(txt[1])
    elif txt[0]=="pop":
        if front!=rear: print(queue[front+1]); front+=1
        else: print(-1)
    elif txt[0]=="size":
        print(rear-front)
    elif txt[0]=="empty":
        if rear!=front: print(0)
        else: print(1)
    elif txt[0]=="front":
        if rear!=front: print(queue[front+1])
        else: print(-1)
    else:
        if rear!=front: print(queue[rear])
        else: print(-1)