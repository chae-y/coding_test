import sys, itertools
n=int(sys.stdin.readline())
arr=map(int,sys.stdin.readline().split())

permutation_arr=itertools.permutations(arr)

result=0
for li in permutation_arr:
    s=0
    for i in range(n-1):
        s+=abs(li[i]-li[i+1])
    result=max(result,s)

print(result)