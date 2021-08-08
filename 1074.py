import sys

def z(a,b,len,cnt):
    mid=len//2
    if x==a and y==b: return cnt
    if x<a+mid and y<b+mid:
        return z(a,b,mid,cnt)
    if y<b+mid:
        return z(a+mid,b,mid,cnt+2*(mid**2))
    if x<a+mid:
        return z(a,b+mid,mid,cnt+(mid**2))
    return z(a+mid,b+mid,mid,cnt+3*(mid**2))

n,x,y=map(int,sys.stdin.readline().split())
print(z(0,0,2**n,0))