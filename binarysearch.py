def search(nums, target) -> int:
    leng=len(nums)
    upperbound=leng-1
    lowerbound=0
    i=lowerbound+upperbound//2
    lastnum = 0.5
    while(nums[i]!=target and upperbound!=lowerbound and lastnum!=nums[i]):
        lastnum=nums[i]
        if(nums[i]<target):
            lowerbound=i
        else:
            upperbound=i
        i=lowerbound+upperbound//2
    if(nums[i]==target):
        return i
    if nums[lowerbound]==target:
        return lowerbound
    if nums[upperbound]==target:
        return upperbound
    return -1

search([-1,0,3,5,9,12],12)