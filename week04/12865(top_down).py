import sys

def go(i, w):
    global dp
    if i == -1:
        return 0

    if dp[i][w] > 0:
        return dp[i][w]

    dp[i][w] = go(i-1, w)
    if w - arr[i][0] >= 0:
        if dp[i-1][w-arr[i][0]] !=0:
            dp[i][w] = max(dp[i][w], dp[i-1][w-arr[i][0]] + arr[i][1])
        else:
            dp[i][w] = max(dp[i][w], go(i-1, w-arr[i][0]) + arr[i][1])
    
    return dp[i][w]

n, k = map(int, sys.stdin.readline().split())
arr = []
dp = [[0] * (k + 1) for _ in range(n)]

for _ in range(n):
    w, c = map(int, sys.stdin.readline().split())
    arr.append([w, c])

print(go(n-1, k))