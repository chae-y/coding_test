import sys,math

def hanoi(start, mid, end, n):
    if n==0: return 0
    hanoi(start,end, mid,n-1)
    print(start, end)
    hanoi(mid,start, end,n-1)
    return 0

a=int(sys.stdin.readline())
print(int(math.pow(2,a))-1)
if a<=20:
    hanoi(1,2,3,a)