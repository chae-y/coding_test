import sys

def binary_search(x,start, end):
    global zero,result,r_san,r_al
    mid=(start+end)//2
    y=al[mid]
    if abs(result)>abs(x+y):
        result=x+y
        r_san=x
        r_al=y
    if start>=end:
        return
    if x+y==0:
        zero=True
        print(y,x)
        return
    if x+y>0:
        binary_search(x,start,mid-1)
    else:
        binary_search(x,mid+1,end)
    return 0

n=int(sys.stdin.readline())
arr=list(map(int,sys.stdin.readline().split()))
san=[]
al=[]
for i in arr:
    if i>0: san.append(i)
    else: al.append(i)

san.sort()
al.sort()
zero=False
result=2000000001
if len(san)==0: print(al[-2],al[-1])
elif len(al)==0: print(san[0],san[1])
else:
    r_san=san[0]
    r_al=al[0]
    for s in san:
        binary_search(s,0,len(al)-1)
        if zero: break

    if not zero:
        if(len(san)>=2 and san[0]+san[1]<abs(result)):  print(san[0],san[1])
        elif(len(al)>=2 and -al[-1]-al[-2]<abs(result)):  print(al[-2],al[-1])
        else:print(r_al,r_san)