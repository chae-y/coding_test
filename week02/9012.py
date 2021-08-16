import sys
n=int(sys.stdin.readline())
for _ in range(n):
    str=sys.stdin.readline().rstrip()
    stack=[]
    no=False
    for x in str:
        if x=='(': stack.append(1)
        else:
            if not stack:
                no =True
                break
            else:
                stack.pop()
    if no: print("NO")
    elif len(stack)>0: print("NO")
    else: print("YES") 