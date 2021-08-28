import sys

def go(i, w):
    global dp
    if dp[i][w] > 0:
        return dp[i][w]
    if i == n:
        return 0
    
    n1 = 0
    if w + arr[i][0] <= k: #넣는거
        n1 = arr[i][1] + go(i + 1, w + arr[i][0])
    n2 = go(i + 1, w) #빼는거
    dp[i][w] = max(n1, n2) 
    return dp[i][w]

n, k = map(int, sys.stdin.readline().split())
arr = []
dp = [[0] * (k + 1) for _ in range(n + 1)]

for _ in range(n):
    w, c = map(int, sys.stdin.readline().split())
    arr.append([w, c])

print(go(0, 0)) 
