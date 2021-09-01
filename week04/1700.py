import sys
from collections import deque

n, k = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))

order = [deque() for _ in range(k + 1)]

for i in range(k):
    order[arr[i]].append(i)

now = set()
count = 0

for x in arr:
    order[x].popleft()
    if len(now) < n:
        now.add(x)
        continue

    if x in now:
        continue

    last = 0
    num = 0
    for y in now:
        if not order[y]:
            num = y
            break
        if order[y][0] > last:
            last = order[y][0]
            num = y
    now.remove(num)
    now.add(x)
    count += 1

print(count)