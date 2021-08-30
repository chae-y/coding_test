import sys

def tsp(now, visited):
    result = 999999999

    if visited == (1 << n) - 1: #다 방문 111111111
        if arr[now][0] > 0:
            return arr[now][0]
        else:
            return result
        
    if dp[now][visited] != -1: #이미 존재
        return dp[now][visited]
    
    for i in range(n):
        if visited & (1 << i) != 0: # 이미 방문 했을 때
            continue
        if arr[now][i] == 0: # 길이 없을 때
            continue
        result = min(result, tsp(i, visited | (1 << i)) + arr[now][i])
    dp[now][visited] = result
    return result

n = int(sys.stdin.readline())

arr = [list(map(int, sys.stdin.readline().split())) for i in range(n)]

dp = [[-1] * (1<<n) for i in range(n)]

print(tsp(0, 1 << 0))
