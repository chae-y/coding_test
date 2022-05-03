def check(str):
    alpha = 0
    digit = 0
    for s in str:
        if s.isalpha():
            alpha+=1
        elif s.isdigit():
            digit+=1
        else:
            return False
    if alpha%2==0 and digit%2==1:
        return True
    else:
        return False

def solution(S):

    arr = S.split(' ')
    answer = -1

    for temp in arr:
        if check(temp):
            answer = max(answer, len(temp))

    return answer