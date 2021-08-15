import sys

def binary_search(x,y,start,end):
    mid=(start+end)//2
    gun_x=gun[mid]
    if abs(gun_x-x)+y<=l:
        return True
    if start>=end: return False
    if gun_x==x: return False
    elif gun_x<x:
        return binary_search(x,y,mid+1,end)
    else:
        return binary_search(x,y,start,mid-1)

m,n,l=map(int,sys.stdin.readline().split())
gun=list(map(int,sys.stdin.readline().split()))
animals=[tuple(map(int,sys.stdin.readline().split())) for _ in range(n)]

gun.sort()

cnt=0
for animal in animals:
    if binary_search(animal[0],animal[1],0,m-1): cnt+=1

print(cnt)
