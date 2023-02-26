s = "A man, a plan, a canal: Panama"

# s = ''.join(filter(str.isalnum, s.lower()))

# print(s == s[::-1])


# submit
class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = ''.join(e for e in s if e.isalnum()).lower()
        return s == s[::-1]