import sys

x,y=map(int, sys.stdin.readline().split())
n=int(sys.stdin.readline())
col=[]
row=[]
for i in range(n):
    a,b=map(int, sys.stdin.readline().split())
    if a==0:
        row.append(b)
    else:
        col.append(b)
row.append(y)
col.append(x)
row.sort()
col.sort()
post_row=0
post_col=0
result=0
for a in row:
    now_row=a-post_row
    for b in col:
        now_col=b-post_col
        result=max(result,now_row*now_col)
        post_col=b
    post_row=a
    post_col=0
print(result)