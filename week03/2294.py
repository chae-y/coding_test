import sys

n, k = map(int, sys.stdin.readline().split())
arr = [int(sys.stdin.readline()) for _ in range(n)]
arr=list(set(arr))

dp = [999999999] * (k + 1)

for x in arr:
    if x <= k : dp[x] = 1

for i in range(1,k+1):
    for j in range(len(arr)):
        if (i - arr[j]) > 0 : dp[i] = min(dp[i], dp[i - arr[j]] + 1)

if dp[k] == 999999999:
    print(-1)
else: print(dp[k])