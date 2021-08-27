import sys

def find1(x):
    global visited,cnt
    visited[x]=1
    for k in arr1[x]:
        if visited[k]==1:
            continue
        cnt+=1
        find1(k)
    return 0

def find2(x):
    global visited,cnt
    visited[x]=1
    for k in arr2[x]:
        if visited[k]==1:
            continue
        cnt+=1
        find2(k)
    return 0

n,m = map(int,sys.stdin.readline().split())

arr1 = [[] for _ in range(n)]
arr2 = [[] for _ in range(n)]

for _ in range(m):
    a, b = map(int, sys.stdin.readline().split())
    arr1[a-1].append(b-1)
    arr2[b-1].append(a-1)

result=0
for i in range(n):
    cnt=0
    visited=[0]*n
    find1(i)
    if cnt>n//2: result+=1
    cnt=0
    visited=[0]*n
    find2(i)
    if cnt>n//2: result+=1

print(result)