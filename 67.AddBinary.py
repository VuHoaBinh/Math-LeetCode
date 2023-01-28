'''
Given two binary strings a and b, return their sum as a binary string.

 

Example :

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"


'''
#idea
a = "11"
b = "01"
max_length = max(len(a),len(b))
a = a.zfill(max_length) #11
print(a)
b = b.zfill(max_length)	#01
print(b)
result = ''
carry = 0


for i in range(max_length -1,-1,-1):
	if int(a[i]) + int(b[i]) + carry == 0:
		result = '0'+ result
		carry = 0
	elif int(a[i]) + int(b[i]) + carry == 1:
		result = '1'+ result
		carry = 0
	elif int(a[i]) + int(b[i]) + carry == 2:
		result = '0'+ result
		carry = 1
	elif int(a[i]) + int(b[i]) + carry >2:
		result = '1' + result
		carry = 1
	#option2	
	# r = carry
	# r += 1 if a[i] == '1' else 0
	# r += 1 if b[i] == '1' else 0
	# result = ('1' if r % 2 == 1 else '0') + result
	# carry = 0 if r < 2 else 1

if carry!=0:
	result = '1'+ result
print(max_length)
print(result.zfill(max_length))


#submit
# class Solution(object):
#     def addBinary(self, a, b):
#         """
#         :type a: str
#         :type b: str
#         :rtype: str
#         """
#         max_length = max(len(a),len(b))
#         a = a.zfill(max_length) #11
#         print(a)
#         b = b.zfill(max_length)	#01
#         print(b)
#         result = ''
#         carry = 0


#         for i in range(max_length -1,-1,-1):
#             if int(a[i]) + int(b[i]) + carry == 0:
#                 result = '0'+ result
#                 carry = 0
#             elif int(a[i]) + int(b[i]) + carry == 1:
#                 result = '1'+ result
#                 carry = 0
#             elif int(a[i]) + int(b[i]) + carry == 2:
#                 result = '0'+ result
#                 carry = 1
#             elif int(a[i]) + int(b[i]) + carry >2:
#                 result = '1' + result
#                 carry = 1

#         if carry!=0:
#             result = '1'+ result
        
#         return result