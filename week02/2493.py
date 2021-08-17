import sysimport sys
n=int(sys.stdin.readline())
arr=list(map(int,sys.stdin.readline().split()))
stack=[]
stack.append((-1,100000001))
for i in range(n):
    while True:
        if stack[-1][1]<arr[i]:
            stack.pop()
        else:
            break
    print(stack[-1][0]+1, end=" ")
    stack.append((i,arr[i]))