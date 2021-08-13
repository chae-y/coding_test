# import sys,math

# def isPrime(n):
#     if n==0 or n==1:
#         return False
#     for i in range(2, int(math.sqrt(n))+1):
#         if n%i==0:   return False
#     return True

# a= int(sys.stdin.readline())
# nums=[int(sys.stdin.readline()) for i in range(a)]
# for i in range(a):
#     b=c=nums[i]//2
#     while(not isPrime(b) or not isPrime(c)):
#         b-=1
#         c+=1
#     print(b,c)

import sys
n=int(sys.stdin.readline())
cnt=0
for i in range(1,n+1):
    if(i<100) :  cnt+=1
    else:
        if int(str(i)[0])-int(str(i)[1])==int(str(i)[1])-int(str(i)[2]):
            cnt+=1
print(cnt)
