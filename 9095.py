import sys

def f(num):
    if num==1: return 1
    if num==2: return 2
    if num==3: return 4
    return f(num-1)+f(num-2)+f(num-3)

n= int(sys.stdin.readline())

for i in range(n):
    temp=int(sys.stdin.readline())
    print(f(temp))