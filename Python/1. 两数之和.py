def twoSum_sov1(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """

    hashmap = {}
    for i in range(0, len(nums)):
        hashmap[nums[i]] = i
    for i in range(0, len(nums)):
        ans = target - nums[i]
        if ans in hashmap and hashmap[ans] != i:
            return [i, hashmap[ans]]
    return [0, 0]


def twoSum_sov2(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """

    hashmap = {}
    for i, num in enumerate(nums):
        if target - num in hashmap:
            return [hashmap.get(target - num), i]
        hashmap[num] = i
    return []


def twoSum_sov3(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """

    for i in range(0, len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]
    return [0, 0]


nums = [3, 2, 4]
target = 6
print(twoSum_sov1(nums=nums, target=target))
