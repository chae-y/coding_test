import sys

n, k = map(int, sys.stdin.readline().split())
arr = [[0,0]]
dp = [[0] * (k + 1) for _ in range(n + 1)]

for _ in range(n):
    w, c = map(int, sys.stdin.readline().split())
    arr.append([w, c])

for i in range(1, n + 1):
    for j in range(1, k + 1):
        weight = arr[i][0]
        cost = arr[i][1]

        if j < weight:
            dp[i][j] = dp[i - 1][j]
        else:
            dp[i][j] = max(cost + dp[i-1][j - weight], dp[i -1][j])

print(dp[n][k])
