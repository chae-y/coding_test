import sys

def solve():
    n = int(sys.stdin.readline())
    arr = []
    for _ in range(n):
        a, b = map(int, sys.stdin.readline().split())
        arr.append([a, b])

    arr.sort()

    interview = arr[0][1]
    count = 1
    for i in range(1, n):
        if interview > arr[i][1]:
            count += 1
            interview = arr[i][1]
    print(count)

    return 0

t = int(sys.stdin.readline())
for _ in range(t):
    solve()