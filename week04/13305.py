import sys

n = int(sys.stdin.readline())

arr = [int(sys.stdin.readline()) for _ in range(n)]

dp = [[0]*2 for _ in range(n)]

dp[0][0] = arr[0]
if n > 1: dp[1][0] = arr[1]

for i in range(1,n): 
    if i>1:
        dp[i][0] = max(dp[i-2]) + arr[i]
    dp[i][1] = dp[i-1][0] + arr[i]

print(max(dp[n-1]))
