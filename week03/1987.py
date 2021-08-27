import sys

dx = [0, 0, -1, 1]
dy = [1, -1, 0, 0]

r, c = map(int, sys.stdin.readline().split())
arr = [sys.stdin.readline() for _ in range(r)]

result = 1
queue = set([(0, 0, arr[0][0])])

while queue and result < 26:
    x, y, history = queue.pop()
    for i in range(4):
        next_x = x + dx[i]
        next_y = y + dy[i]
        if next_x < 0 or next_x >= c:
            continue
        if next_y < 0 or next_y >= r:
            continue
        new = arr[next_y][next_x]
        if new in history:
            continue

        queue.add((next_x, next_y, history + new))
        result = max(result, len(history) + 1)

print(result)