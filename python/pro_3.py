def solution(rows, columns, queries):
    answer = []
    arr = [[] for _ in range(rows)]
    temp = 1
    for i in range(rows):
        for j in range(columns):
            arr[i].append(temp)
            temp+=1
    for [x1,y1,x2,y2] in queries:
        x,y = x1-1, y1-1
        tmp1 = arr[x][y]
        minX = tmp1
        for i in range(1,y2-y1+1): # >
            tmp2 = arr[x][y+i]
            arr[x][y+i] = tmp1
            tmp1 = tmp2
            minX = min(minX,tmp1)
        x,y = x1-1, y2-1
        for i in range(1,x2-x1+1): # V
            tmp2 = arr[x+i][y]
            arr[x+i][y] = tmp1
            tmp1 = tmp2
            minX = min(minX,tmp1)
        x,y = x2-1, y2-1
        for i in range(1,y2-y1+1): # <
            tmp2 = arr[x][y-i]
            arr[x][y-i] = tmp1
            tmp1 = tmp2
            minX = min(minX,tmp1)
        x,y = x2-1, y1-1
        for i in range(1,x2-x1+1): # A
            tmp2 = arr[x-i][y]
            arr[x-i][y] = tmp1
            tmp1 = tmp2
            minX = min(minX,tmp1)
        answer.append(minX)
    return answer