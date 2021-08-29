import sys
n=int(sys.stdin.readline())
arr=list(map(int,sys.stdin.readline().split()))

dp=[0]*1001

for x in arr:
    dp[x]=max(dp[:x])+1

print(max(dp))
