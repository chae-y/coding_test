import sys

n, k = map(int, sys.stdin.readline().split())
arr = []

for _ in range(n):
    arr.append(int(sys.stdin.readline()))

arr.sort(reverse = True)
result = 0

for i in range(n):
    if k // arr[i] != 0:
        result += k // arr[i]
        k %= arr[i]

print(result)