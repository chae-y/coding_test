import sys

def arr_multi(arr1, arr2):
    temp=[[0]*n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            summ=0
            for k in range(n):
                summ+=(arr1[i][k]*arr2[k][j])
                # print(arr1[i][k],arr2[k][j])
            temp[i][j]=summ%1000
            # print(summ)
    return temp
        

def power(x,y,z):
    if y==1: return z
    else:
        temp=power(x,y//2,z)
        # print(temp)
        if y%2==0:
            return arr_multi(temp,temp)
        else:
            return arr_multi(arr_multi(temp,temp),z)

n,b=map(int,sys.stdin.readline().split())
arr=[list(map(int,sys.stdin.readline().split())) for _ in range(n)]

result=power(n,b,arr)
for i in range(n):
    for j in range(n):
        print(result[i][j]%1000,end=" ")
    print()