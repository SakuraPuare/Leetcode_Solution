def findMedianSortedArrays(nums1, nums2):
    """
    :type nums1: List[int]
    :type nums2: List[int]
    :rtype: float
    """
    nums = nums1 + nums2
    nums.sort()
    l = len(nums)
    mid = len(nums) / 2
    midn = int(mid)
    if l % 2 == 0:
        return (nums[midn-1] + nums[midn]) / 2
    else:
        return nums[midn]


nums1 = [1,3]
nums2 = [2,7]
print(findMedianSortedArrays(nums1, nums2))