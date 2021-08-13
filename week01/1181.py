import sys
n= int(sys.stdin.readline())
arr=[]
for i in range(n):
    arr.append(sys.stdin.readline().strip())
set_arr=set(arr)
arr=list(set_arr)
arr.sort()
arr.sort(key=len)
for i in arr:
    print(i)