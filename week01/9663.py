import sys

def ok(y):
    for i in range(y):
        if col[i]==col[y]:
            return False
        if abs(col[i]-col[y])==y-i: return False
    return True

def queen(x):
    global cnt
    global col
    if x==a: cnt+=1
    else:
        for i in range(a):
            col[x]=i
            if ok(x): queen(x+1)
    return 0

a = int(sys.stdin.readline())
cnt=0
col=[0]*a
queen(0)

print(cnt)