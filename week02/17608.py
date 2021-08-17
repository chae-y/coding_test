import sys
n=int(sys.stdin.readline())
arr=list(int(sys.stdin.readline()) for _ in range(n))
h=arr[-1]
cnt=1
for x in arr[::-1]:
    if(x>h):
        cnt+=1
        h=x

print(cnt)