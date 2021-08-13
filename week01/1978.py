import sys, math

def isPrime(n):
    if n==0 or n==1:
        return False
    for i in range(2, int(math.sqrt(n))+1):
        if n%i==0:   return False
    return True


s=int(sys.stdin.readline())
nums=list(map(int,sys.stdin.readline().split()))
cnt=0
for n in nums:
    if(isPrime(n)): cnt+=1
print(cnt)