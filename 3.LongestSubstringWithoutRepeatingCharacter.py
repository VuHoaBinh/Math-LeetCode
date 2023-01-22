'''
Given a string s, find the length of the longest substring without repeating characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

'''
s = "pwwkew"
i,j = 0,0
char_set = set()
count_max = 0
while j<len(s):
	if s[j] not in char_set:
		char_set.add(s[j])
		count_max = max(count_max,j-i+1)
		j+=1
	else:
		char_set.remove(s[i])
		i+=1
print(list(char_set))
print(count_max)

# submit
# class Solution(object):
#     def lengthOfLongestSubstring(self, s):
#         """
#         :type s: str
#         :rtype: int
#         """
#         i,j = 0,0
#         char_set = set()
#         count_max = 0
#         while j<len(s):
#             if s[j] not in char_set:
#                 char_set.add(s[j])
#                 count_max = max(count_max,j-i+1)
#                 j+=1
#             else:
#                 char_set.remove(s[i])
#                 i+=1
#         return count_max