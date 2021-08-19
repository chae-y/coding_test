import sys

txt=sys.stdin.readline().rstrip()
stack=[]
    
for x in txt:
    if x=="(":
        stack.append(x)
    elif x==")":
        if stack and str(stack[-1]).isdigit():
            n=stack.pop()*2
            if stack and stack[-1]=='(': stack.pop()
            else: stack.append('-')
            stack.append(n)
        elif stack and stack[-1]=='(':
            stack.pop()
            stack.append(2)
        else:
            stack.append('-')
            break
    elif x=="[":
        stack.append(x)
    elif x=="]":
        if stack and str(stack[-1]).isdigit():
            n=stack.pop()*3
            if stack and stack[-1]=='[': stack.pop()
            else: stack.append('-')
            stack.append(n)
        elif stack and stack[-1]=='[':
            stack.pop()
            stack.append(3)
        else:
            stack.append('-')
            break
    else:
        stack.append('-')
        break
    if len(stack)>1 and str(stack[-1]).isdigit() and str(stack[-2]).isdigit():
        stack.append(stack.pop()+stack.pop())

if len(stack)==1 and str(stack[0]).isdigit():
    print(stack.pop())
else: print (0)