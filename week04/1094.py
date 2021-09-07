import sys

n = int(sys.stdin.readline())

b = bin(n)
print(b)

print(b.count('1'))