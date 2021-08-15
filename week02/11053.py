import sys
n=int(sys.stdin.readline())
arr=list(map(int,sys.stdin.readline().split()))

dp=[0]*1001

for x in arr:
    none=True
    for i in range(x-1,0,-1):
        if dp[i]!=0: 
            dp[x]=max(dp[:i+1])+1
            none=False
            break
    if none: dp[x]=1

print(max(dp))
