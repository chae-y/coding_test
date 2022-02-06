def solution(x):
    answer = True
    sum = 0
    for s in str(x):
        sum+=int(s)
    return x%sum==0