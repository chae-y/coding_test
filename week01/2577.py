import sys
a=int(sys.stdin.readline())
b=int(sys.stdin.readline())
c=int(sys.stdin.readline())

result=str(a*b*c)

dic={}

for i in range(10):
    dic[i]=0
for i in range(len(result)):
    dic[int(result[i])]=dic.get(int(result[i]))+1

for i in range(10):
    print(dic.get(i))