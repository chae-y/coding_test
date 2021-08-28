import sys

n = int(sys.stdin.readline())

dp = [0] * (n + 1)
dp[1] = 1

if n == 1:
    print(1)
    sys.exit()

for i in range(2, n + 1):
    dp[i] = dp[i - 1] + dp[i - 2]

print(dp[n])

2
import sys

n = int(sys.stdin.readline())
