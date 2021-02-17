from collections import Counter

liStr = ["bella", "label", "roller"]

commonStr = Counter(liStr[0]) & Counter(liStr[1])

for i in range(2, len(liStr)):
    commonStr = Counter(commonStr) & Counter(liStr[i])
    
print (list(commonStr.elements()))