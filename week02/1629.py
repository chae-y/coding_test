import sys,math

def power(x,y):
    if y==1: return x%c
    else:
        temp=power(x,y//2)
        if y%2==0:
            return temp*temp%c
        else:   return temp*temp*a%c

a,b,c=map(int,sys.stdin.readline().split())

result=power(a,b)
print(result)

