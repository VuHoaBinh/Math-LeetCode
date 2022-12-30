'''Given an integer num, return the number of steps to reduce it to zero.

In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.




Example
Input: num = 14
Output: 6
Explanation: 
Step 1) 14 is even; divide by 2 and obtain 7. 
Step 2) 7 is odd; subtract 1 and obtain 6.
Step 3) 6 is even; divide by 2 and obtain 3. 
Step 4) 3 is odd; subtract 1 and obtain 2. 
Step 5) 2 is even; divide by 2 and obtain 1. 
Step 6) 1 is odd; subtract 1 and obtain 0.

Input: num = 8
Output: 4
Explanation: 
Step 1) 8 is even; divide by 2 and obtain 4. 
Step 2) 4 is even; divide by 2 and obtain 2. 
Step 3) 2 is even; divide by 2 and obtain 1. 
Step 4) 1 is odd; subtract 1 and obtain 0.

Input: num = 123
Output: 12
'''

#idea
x = int(input())
count =0
while x>0:
    if x%2==0:
        x/=2
        count+=1
    else:
        x-=1
        count+=1
print(count)
#submit
# class Solution(object):
#     def numberOfSteps(self, num):
#         """
#         :type num: int
#         :rtype: int
#         """
#         count =0
#         while num>0:
#             if num%2==0:
#                 num/=2
#                 count+=1
#             else:
#                 num-=1
#                 count+=1
#         return count