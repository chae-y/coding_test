import sys

n, m = map(int, sys.stdin.readline().split())
arr = []

for _ in range(m):
    arr.append(int(sys.stdin.readline()))

dp = [[999999999] * (n//3+1) for _ in range(n+1)]  # dp[i][j]=count i위치 j전에 점프한 칸수 count 횟수

dp[1][0] = 0
for i in range(n+1):
    for j in range(n//3+1):
        if dp[i][j] != 999999999:
            if i + j -1 < n + 1 and j - 1 > 0 and i + j -1 not in arr:
                dp[i+j-1][j-1] = min(dp[i][j] + 1, dp[i+j-1][j-1])
            if i + j < n + 1 and i + j not in arr:
                dp[i+j][j] = min(dp[i][j] + 1, dp[i+j][j])
            if i + j +1 < n + 1 and j + 1 < n//3+1 and i + j +1 not in arr:
                dp[i+j+1][j+1] = min(dp[i][j] + 1,dp[i+j+1][j+1])

result = min(dp[n])
if result == 999999999:
    print(-1)
else:
    print(result)
