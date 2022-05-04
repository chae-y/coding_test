def solution(K, C, D):
    # write your code in Python 3.6
    answer = 0
    dict1 = {}
    for c in C:
        if c in dict1:
            dict1[c] += 1
        else:
            dict1[c] = 1

    dict2 = {}
    temp=0
    for d in D:
        if temp==K:
            break
        if d in dict1 and dict1[d]%2==1:
            dict1[d] += 1
            temp += 1
        elif d in dict2:
            dict2[d] += 1
        else:
            dict2[d] = 1

    
    for value in dict1.values():
        answer += (value//2)

    for value in dict2.values():
        if K-temp<2:
            break
        while value>1:
            value-=2
            temp+=2
            answer +=1
            if K-temp<2:
                break

    return answer