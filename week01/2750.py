import sys
n=int(sys.stdin.readline())
arr=[int(sys.stdin.readline()) for i in range(n)]
arr.sort()
for i in range(n):
    print(arr[i])