import sys

def count(a, b, c):
    return arr[a][0] * arr[b][1] * arr[c][1]

def mutiple(start, end):
    global dp
   
    if end == start:
        dp[start][end] = 0
    
    # if end - start == 1:
    #     dp[start][end] = count(start, start, end)
    #     return dp[start][end]
    
    for i in range(end - start):
        if dp[start][start + i] == 999999999:
            mutiple(start, start + i)
        if dp[start + i + 1][end] == 999999999:
            mutiple(start + i + 1, end)
        dp[start][end] = min(dp[start][end], dp[start][start + i] + dp[start + i + 1][end] + count(start, start + i, end))

    return dp[start][end]

n = int(sys.stdin.readline())
arr = []

for _ in range(n):
    a, b = map(int, sys.stdin.readline().split())
    arr.append([a, b])

dp = [[999999999] * n for _ in range(n)] # dp[i][j]=m i부터 j까지 곱의 연산횟수 최대 값

print(mutiple(0, n-1))
print(dp)