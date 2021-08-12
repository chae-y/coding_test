# import sys,math

# n=sys.stdin.readline()
# l=len(n)-1
# n=int(n)
# finish=False
# for i in range(math.ceil(n-l*9),n):
#     temp=i
#     a=i
#     while(a!=0):
#         temp+=a%10
#         a//=10
#     if(temp==n):
#         print(i)
#         finish=True
#         break
# if not finish:
#     print(0)

import sys,math

n=int(sys.stdin.readline().rstrip())
finish=False
for i in range(n):
    temp=i
    a=i
    while(a!=0):
        temp+=a%10
        a//=10
    if(temp==n):
        print(i)
        finish=True
        break
if not finish:
    print(0)