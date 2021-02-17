nums = [1, 2, 3, 2]
numsD = {}

for i in nums:
    if not(i in numsD):
        numsD[i] = 1

    else:
        numsD[i] = 0

SumUnique = 0

for pair in numsD.items():
    if pair[1] == 1:
        SumUnique += pair[0]

print (SumUnique)


