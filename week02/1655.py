import sys
import heapq

n= int(sys.stdin.readline())
left=[]
right=[]
for _ in range(n):
    x = int(sys.stdin.readline())
    if len(left)==len(right):
        heapq.heappush(left,-x)#max heap
    else:
        heapq.heappush(right,x)#min heap

    if right and -left[0]>right[0]:
        l=-heapq.heappop(left)
        r=heapq.heappop(right)
        heapq.heappush(right,l)
        heapq.heappush(left,-r)

    print(-left[0])