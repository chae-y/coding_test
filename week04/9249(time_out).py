import sys
A = sys.stdin.readline().rstrip()
B = sys.stdin.readline().rstrip()

result = [0, 0]

for i in range(len(A)):
    for j in range(len(B)):
        if A[i]==B[j]:
            k = 1
            while True:
                if i + k == len(A) or j + k == len(B):
                    break
                if A[i + k] != B[j + k]:
                    break
                k += 1
            if result[1] <  k:
                result = [i, k]

print(result[1])
for i in range(result[1]):
    print(A[result[0]+i], end = "")