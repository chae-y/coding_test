import sys

def fac(n):
    if n==0: return 1
    if n==1: return 1
    return n*fac(n-1)

a=int(sys.stdin.readline())
print(fac(a))