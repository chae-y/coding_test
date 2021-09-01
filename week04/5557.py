import sys
from functools import lru_cache

@lru_cache(maxsize = 1000)
def dp(idx, sum):
    if idx < 0:
        return 0
    if sum < 0 or sum > 20:
        return 0
    if idx == n - 2:
        if sum == arr[n-1]:
            return 1
        else:
            return 0
    check = 0
    check += dp(idx + 1, sum + arr[idx + 1])
    check += dp(idx + 1, sum - arr[idx + 1])
    return check

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))

print(dp(0, arr[0]))