import sys
a=int(sys.stdin.readline())
for i in range(a):
    n, txt=sys.stdin.readline().split()
    for j in range(len(txt)):
        print(txt[j]*int(n), end="")
    print()