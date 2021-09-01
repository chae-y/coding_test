import sys

A = " " + sys.stdin.readline().rstrip()
B = " " + sys.stdin.readline().rstrip()

dp = [[0] * len(A) for _ in range(len(B))]
count = 0
b = 0

for i in range(1,len(B)):
    for j in range(1,len(A)):
        if A[j]==B[i]:
            dp[i][j] = dp[i-1][j-1] + 1
            if dp[i][j] > 1:
                if count < dp[i][j]:
                    count = dp[i][j]
                    b=i

print(count)
for i in range(count,0,-1):
    print(B[b+1-i], end="")