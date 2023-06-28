'''
Given an integer array nums of length n and an integer target,
 find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

Example:
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).


'''
class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums.sort()
        number_closest_target = 2**63
        for i in range(len(nums)):
            left = i+1
            right = len(nums)-1
            while left<right:
                number = nums[i] + nums[left] + nums[right]
                if number == target:
                    return number
                if abs(number - target) < abs(number_closest_target - target):
                    number_closest_target = number

                if number < target:
                    left+=1
                else:
                    right-=1
        return number_closest_target
        