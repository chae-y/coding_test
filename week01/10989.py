import sys
a= int(sys.stdin.readline())
arr=[0]*10001
for i in range(a):
    temp = int(sys.stdin.readline())
    arr[temp]+=1
for i in range(1,10001):
    for j in range(arr[i]):
        print(i)