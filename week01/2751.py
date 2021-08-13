import sys
a= int(sys.stdin.readline())
arr = [int(sys.stdin.readline()) for i in range(a)]
arr.sort()
for i in range(a):
    print(arr[i])