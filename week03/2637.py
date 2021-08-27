import sys

def find(toy):
    global dp
    if not arr[toy]:
        dp[toy][toy]=1
    else:
        for a,b in arr[toy]:
            if sum(dp[a])==0:
                find(a)
            for i in range(n):
                dp[toy][i]+=dp[a][i]*b
    return 0

n = int(sys.stdin.readline())
m = int(sys.stdin.readline())

arr = [[] for i in range(n)]
dp = [[0]*n for i in range(n)]
result = [0] * n

for _ in range(m):
    x, y, k = map(int, sys.stdin.readline().split())
    arr[x-1].append((y-1, k))

for a,b in arr[n-1]:
    if sum(dp[a])==0:
        find(a)
    for i in range(n):
        result[i]+=(dp[a][i]*b)

for i in range(n):
    if result[i] != 0:
        print(i+1, result[i])
