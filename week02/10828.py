import sys

n=int(sys.stdin.readline())

stack=[]

for _ in range(n):
    txt=sys.stdin.readline().rstrip()
    if " " in txt:
        num=txt.split()[1]
        txt=txt.split()[0]
    if txt=="push":
        stack.append(int(num))
    elif txt=="pop":
        if not stack: print(-1)
        else:
            print(stack[-1])
            stack.pop()
    elif txt=="size":
        print(len(stack))
    elif txt=="empty":
        if stack: print(0)
        else: print(1)
    else:
        if not stack: print(-1)
        else: print(stack[-1])