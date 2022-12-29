'''
Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.


Example
Input: n = 3
Output: ["1","2","Fizz"]

Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]

Input: n = 15
Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]

'''
#idea
n = int(input())
list_array = []
for i in range(1,n+1):
    if i % 3 ==0 and i%5==0:
        list_array.append("FizzBuzz")
    elif i % 3 == 0:    
        list_array.append("Fizz")
    elif i%5 ==0:
        list_array.append("Buzz")
    else:
        list_array.append(str(i))
print(list(list_array)) 

# submit
# class Solution:
#     def fizzBuzz(self, n: int) -> List[str]:
#         List = []
#         for i in range(1,n+1):
#             if i % 3 ==0 and i%5==0:
#                 List.append("FizzBuzz")
#             elif i % 3 == 0:	
#                 List.append("Fizz")
#             elif i%5 ==0:
#                 List.append("Buzz")
#             else:
#                 List.append(str(i))
#         return List