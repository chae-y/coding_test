import sys

n1 = int(sys.stdin.readline())
arr1=list(map(int,sys.stdin.readline().split()))
n2 = int(sys.stdin.readline())
arr2=list(map(int,sys.stdin.readline().split()))

for x in arr2:
    if x in arr1: print(1)
    else: print(0)