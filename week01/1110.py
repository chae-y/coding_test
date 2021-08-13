import sys

n=sys.stdin.readline().rstrip()
if(len(n)==1): n='0'+n

arr=[]
cnt=0
temp=n
while True:
    if(temp in arr):
        print(cnt)
        break
    arr.append(temp)
    summ=int(temp[0])+int(temp[1])
    if(summ>9): summ-=10
    temp=temp[1]+str(summ)
    if(len(temp)==1): temp='0'+temp
    cnt+=1