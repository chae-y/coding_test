import sys
import heapq

n=int(sys.stdin.readline())
arr=[]
for i in range(n):
    h,o=map(int,sys.stdin.readline().split())
    if h>o: h,o=o,h
    arr.append((o,h))
L=int(sys.stdin.readline())

arr.sort()
result=0
pq=[]


for x in arr:
    heapq.heappush(pq,(x[1],x[0]))
    while pq and x[0]-pq[0][0]>L:
        heapq.heappop(pq)
    if pq and x[0]-pq[0][0]<=L:
        result=max(result,len(pq))

print(result)