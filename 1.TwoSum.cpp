/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

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

*/
#include<bits/stdc++.h>
using namespace std;
// idea  
int main()
{
	int nums[] = {2,7,11,15};
	int target = 9;
	map<int,int>m;
	for(int i=0; i<4; i++){
		int number = target - nums[i];
		// if (m.count(number) >0 or !=0){}
		if(m.find(number) != m.end()){
			cout << m[number] << i;
		}
		m[nums[i]] = i ;
	}	
}

// submit
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         map<int,int>m;
//         for(int i=0; i<nums.size(); i++){
//             int number = target - nums[i];
//             if(m.find(number) != m.end()){
//                 return {m[number],i};
//             }
//             m[nums[i]] = i ;
//         }
//         return {};	
//     }
// };