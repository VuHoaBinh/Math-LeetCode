'''
You are given a 2D array of integers envelopes where envelopes[i] = [wi, hi] represents the width and the height of an envelope.

One envelope can fit into another if and only if both the width and height of one envelope are greater than the other envelope's width and height.

Return the maximum number of envelopes you can Russian doll (i.e., put one inside the other).

Note: You cannot rotate an envelope.

 

Example 1:

Input: envelopes = [[5,4],[6,4],[6,7],[2,3]]
Output: 3
Explanation: The maximum number of envelopes you can Russian doll is 3 ([2,3] => [5,4] => [6,7]).
Example 2:

Input: envelopes = [[1,1],[1,1],[1,1]]
Output: 1

'''
class Solution:
    def maxEnvelopes(self, envelopes: List[List[int]]) -> int:
        n = len(envelopes)
        if n == 0:
            return 0
        envelopes.sort(key=lambda x: (x[0], -x[1]))
        dp = [envelopes[0][1]]

        for i in range(1, n):
            if envelopes[i][1] > dp[-1]:
                dp.append(envelopes[i][1])
            else:
                left, right = 0, len(dp) - 1
                while left < right:
                    mid = (left + right) // 2
                    if dp[mid] < envelopes[i][1]:
                        left = mid + 1
                    else:
                        right = mid
                dp[left] = envelopes[i][1]

        return len(dp)

# or:
n = len(envelopes)
if n == 0:
	return 0

envelopes.sort(key=lambda x: (x[0], -x[1]))
dp = [1] * n

for i in range(1, n):
	for j in range(i):
		if envelopes[i][0] > envelopes[j][0] and envelopes[i][1] > envelopes[j][1]:
			dp[i] = max(dp[i], dp[j] + 1)

return (max(dp))
