import sys

t = int(sys.stdin.readline())

for _ in range(t):
    n = int(sys.stdin.readline())
    arr = list(map(int, sys.stdin.readline().split()))
    arr.sort()

    result = [0] * n
    left = -1
    right = n
    for i in range(0, n, 2):
        left += 1
        right -= 1
        if left > right:
            break
        if left == right:
            result[left] = arr[i]
            break
        result[left] = arr[i]
        result[right] = arr[i+1]
    answer = abs(result[0] - result[n -1])
    for i in range(n-1):
        answer = max(answer, abs(result[i]-result[i+1]))

    print(answer)