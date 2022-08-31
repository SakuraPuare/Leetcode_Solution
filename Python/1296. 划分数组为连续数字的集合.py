# 1296. 划分数组为连续数字的集合

def isPossibleDivide(nums, k):
    """
    :type nums: List[int]
    :type k: int
    :rtype: bool
    """

    if len(nums) % k != 0:
        return False

    nums.sort()
    ans = []
    ans.append(nums[0])
    nums.pop(0)
    while(len(ans) < k):
        if nums[0] != ans[len(ans) - 1]:
            ans.append(nums[0])
            nums.pop(0)


nums = [3, 2, 1, 2, 3, 4, 3, 4, 5, 9, 10, 11]
k = 3
print(isPossibleDivide(nums, k))
