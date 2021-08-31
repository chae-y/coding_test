import sys

txt = sys.stdin.readline().rstrip()
index = txt.find('-')

result = 0
if index == -1:
    arr = list(map(int, txt.split("+")))
    for i in range(len(arr)):
        result += arr[i]
    print(result)
    sys.exit()

txt1 = txt[0:index]
txt2 = txt[index+1:]

arr1 = list(map(int, txt1.split("+")))
arr2 = list(map(int, txt2.replace("+", "-").split("-")))

for i in range(len(arr1)):
    result += arr1[i]
for i in range(len(arr2)):
    result -= arr2[i]

print(result)