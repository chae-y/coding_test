import sys

A = " " + sys.stdin.readline().rstrip()
B = " " + sys.stdin.readline().rstrip()

aLen = len(A)
bLen = len(B)

dp = [[0] * aLen for _ in range(bLen)]

for i in range(1,bLen):
    for j in range(1,aLen):
        if A[j]!=B[i]:
            dp[i][j] = max(dp[i-1][j], dp[i][j-1])
        else:
            dp[i][j] = dp[i-1][j-1] + 1

print(dp[bLen-1][aLen-1])
