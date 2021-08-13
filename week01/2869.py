import sys
a,b,c=map(int,sys.stdin.readline().split())

if a-b==1:
    print((c-a)//(a-b)+1)
else:
    print((c-a-1)//(a-b)+2)
