string = input()
paraDict = []
count = 0


for i in string:
    if i == "(":
        count += 1
    elif i == ")":
        count -= 1
    else :
        paraDict.append(count)

print(max(paraDict))