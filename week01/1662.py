import sys
str=sys.stdin.readline().rstrip()
stack=[]

for i in range(len(str)):
    if str[i]=='(':
        stack.append(str[i])
    elif str[i]==')':
        cnt=0
        while True:
            tmp=stack.pop()
            if tmp=='(':
                break
            cnt+=tmp
        stack.append(int(stack.pop())*cnt)
    elif i<len(str)-1 and str[i+1]=='(':
        stack.append(int(str[i]))
    else:
        stack.append(1)

answer=0
for st in stack:
    answer+=st
print(answer)