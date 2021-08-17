import sys
    
n,k=map(int,sys.stdin.readline().split())

list=[]

for i in range(n):
    list.append(i+1)

now=0
k-=1
print("<", end="")
while len(list)>1:
    now+=k
    while now>=len(list):
        now-=len(list)
    print(list.pop(now),end=", ")
print(list.pop(),">", sep="")