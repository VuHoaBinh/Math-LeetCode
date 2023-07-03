'''
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

Example:
Input: nums = [3,2,3]
Output: [3]

Input: nums = [1]
Output: [1]

Input: nums = [1,2]
Output: [1,2]

'''
class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        element_dict = {}
        a = []
        for i in nums:
            if i in element_dict:
                element_dict[i] +=1
            else:
                element_dict[i] = 1

        for key,value in element_dict.items():
            if value > len(nums)//3:
                a.append(key)

        return a