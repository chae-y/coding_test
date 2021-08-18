import sys
import heapq

n=int(sys.stdin.readline())

pq=[int(sys.stdin.readline()) for _ in range(n)]

heapq.heapify(pq)

result=0
while len(pq)>1:
    a=heapq.heappop(pq)
    b=heapq.heappop(pq)
    result+=a+b
    heapq.heappush(pq,a+b)

print(result)
