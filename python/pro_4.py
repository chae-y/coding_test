#queue쓰고 visited로 하면 될듯?
from collections import deque

def bfs(i, computers, n):
    global visited
    queue = deque()
    queue.append(i)
    while(queue):
        a = queue.popleft()
        for b in range(n):
            if computers[a][b]==1 and not visited[b]:
                visited[b] = True
                queue.append(b)
    return

def solution(n, computers):
    global visited
    answer = 0
    visited = [False]*n
    for i in range(n):
        if not visited[i]:
            visited[i] = True
            bfs(i,computers,n)
            answer+=1
    return answer