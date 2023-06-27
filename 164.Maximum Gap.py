'''
Given an integer array nums, return the maximum difference between two successive elements in its sorted form. 
If the array contains less than two elements, return 0.

You must write an algorithm that runs in linear time and uses linear extra space.

Example:
Input: nums = [3,6,9,1]
Output: 3
Explanation: The sorted form of the array is [1,3,6,9], either (3,6) or (6,9) has the maximum difference 3.

Input: nums = [10]
Output: 0
Explanation: The array contains less than 2 elements, therefore return 0.


O(n) = n
'''
class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        nums = sorted(nums)
        if len(nums)<2:
            return 0
        else:
            nums_find_max = 0  
            for i in range(len(nums)-1):
                nums_find_max = max(nums_find_max,abs(nums[i]-nums[i+1]))
            return nums_find_max
            