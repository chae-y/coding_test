import sys

def f(x,y,len):
    global all
    color=arr[x][y]
    all=True
    for i in range(len):
        for j in range(len):
            if arr[x+i][y+j]!=color:
                all=False
                break
        if not all: break
    if all: result[color]+=1; return
    f(x,y,len//2)
    f(x+len//2,y,len//2)
    f(x,y+len//2,len//2)
    f(x+len//2,y+len//2,len//2)
    return


n=int(sys.stdin.readline())
arr=[list(map(int,sys.stdin.readline().split())) for _ in range(n)]
result=[0,0]

f(0,0,n)
print(result[0])
print(result[1])