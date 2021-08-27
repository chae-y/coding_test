import sys

dx = [0, 0, -1, 1]
dy = [1, -1, 0, 0]

def move(y, x, cnt):
    global result
    result =  max(cnt, result)

    alphabet[ord(arr[x][y])-65] = 1
    for i in range(4):
        next_x = x + dx[i]
        next_y = y + dy[i]

        if -1 < next_x < r and -1 < next_y < c:
            if alphabet[ord(arr[next_x][next_y])-65] == 0:
                move(next_y, next_x, cnt+1)
                alphabet[ord(arr[next_x][next_y])-65] = 0

    return 0

r, c = map(int, sys.stdin.readline().split())

# arr = [sys.stdin.readline() for _ in range(r)]
arr = []
for _ in range(r):
    arr.append(list(map(str, sys.stdin.readline())))
    
alphabet = [0] * 26

result=0

move(0,0,1)

print(result)