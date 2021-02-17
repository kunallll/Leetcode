nums = [1,2,3,4,0]
index = [0,1,2,3,0]

target = []

for i in range(0, len(nums)):
    target.insert(index[i], nums[i])

print (target)
