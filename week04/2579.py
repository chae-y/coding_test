import sys

n= int(sys.stdin.readline())
dist = list(map(int, sys.stdin.readline().split()))
oil = list(map(int, sys.stdin.readline().split()))

result = 0
min_oil = oil[0]
for i in range(n-1):
    min_oil = min(min_oil, oil[i])
    result += dist[i] * min_oil

print(result) 

21
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