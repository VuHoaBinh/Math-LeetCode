'''Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Input: nums = [3,2,4], target = 6
Output: [1,2]

Input: nums = [3,3], target = 6
Output: [0,1]

'''
# idea
nums = [2,7,11,15]
target = 9
indices = {}
for i, number1 in enumerate(nums): #liet ke -> map
	number2 = target - number1
	if number2 in indices: # check number2 in indices?
		print(indices[number2])
		print(i)
		break
	indices[number1] = i

#submit
# class Solution:
#     def twoSum(self, nums: List[int], target: int) -> List[int]:
#         indices = {}
#         for i, number1 in enumerate(nums): 
#             number2 = target - number1
#             if number2 in indices: 
#                 return [indices[number2],i]
#             indices[number1] = i
#         return []
