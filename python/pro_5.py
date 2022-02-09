#양방향 k이하 만 배달주문 시작 1번 a,b,c a에서 b까지 c시간
#다익스트라

import heapq

def dijk(N,map,K):
    answer = 0
    d = [999999999]*N
    d[0] = 0
    heap = []
    heapq.heappush(heap, [0,0])
    while heap:
        cost, node = heapq.heappop(heap)
        for i in range(N):
            if map[node][i]>0:
                tmp = map[node][i]+cost
                if d[i]>map[node][i]+cost:
                    d[i] = tmp
                    heapq.heappush(heap, [tmp,i])
    for t in d:
        if t<=K:
            answer+=1
    return answer
            
def solution(N, road, K):
    
    map = [[999999999]*N for _ in range(N)]
    for a,b,c in road:
        map[a-1][b-1] = min(map[a-1][b-1],c)
        map[b-1][a-1] = min(map[b-1][a-1],c)
    
    return dijk(N,map,K)