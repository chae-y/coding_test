import sys

n = int(sys.stdin.readline())
arr = []
for _ in range(n):
    start, end = map(int, sys.stdin.readline().split())
    arr.append([end, start])

arr.sort()

cnt = 0
time = 0

for i in range(n):
    if time <= arr[i][1]:
        time = arr[i][0]
        cnt+=1

print(cnt)