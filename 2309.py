import sys

arr = [int(sys.stdin.readline()) for i in range(9)]
arr.sort()
sum_height=sum(arr)

result=False
for i in range(9):
    for j in range(i+1,9):
        if sum_height-arr[i]-arr[j]==100:
            for k in range(9):
                if k==i or k==j:
                    continue
                else:
                    print(arr[k])
            result=True
            break
    if result: break