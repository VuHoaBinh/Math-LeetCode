'''Given two strings ransomNote and magazine, return true if ransomNote can be constructed by 
using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.


Example
Input: ransomNote = "a", magazine = "b"
Output: false

Input: ransomNote = "aa", magazine = "ab"
Output: false

Input: ransomNote = "aa", magazine = "aab"
Output: true

'''

# idea   

# option set
ransomNote = input()
magazine = input()
s = {} # set
flag = 1
# take character in magazine push set
for i in magazine:
	if i in s:
		s[i]+=1
	else:
		s[i]=1

for i in ransomNote:
	if (s[i] == 0) or (i not in s):
		flag = 0
		break
	else:
		s[i]-=1
if flag ==1:
	print("true")
else:
	print("false")

# submit
# class Solution:
#     def canConstruct(self, ransomNote: str, magazine: str) -> bool:
#         s = {} # set
#         for i in magazine:
#             if i in s:
#                 s[i]+=1
#             else:
#                 s[i]=1

#         for i in ransomNote:
#             if i not in s or s[i] == 0:
#                 return False
#             else:
#                 s[i]-=1
#         return True


