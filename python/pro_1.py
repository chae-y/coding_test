def solution(numbers):
    answer = 0
    arr = [0]*10
    for n in numbers:
        arr[n]+=1
    for i in range(10):
        if arr[i]==0:
            answer+=i
    return answer