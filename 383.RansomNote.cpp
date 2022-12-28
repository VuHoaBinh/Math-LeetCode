/*Given two strings ransomNote and magazine, return true if ransomNote can be constructed by 
using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.


Example
Input: ransomNote = "a", magazine = "b"
Output: false

Input: ransomNote = "aa", magazine = "ab"
Output: false

Input: ransomNote = "aa", magazine = "aab"
Output: true

*/
#include<bits/stdc++.h>
using namespace std;


int main(){
	string ransomNote, magazine;
	cin >> ransomNote;
	cin >> magazine;
	/////////////// idea  ///////////////////////////////////
	//////  option map =============
	int isFlag =1;
	map<char,int>m;
	for(char c:magazine){
		m[c]++;
	}
	for(char c: ransomNote){
		if(m.find(c) == m.end() || m[c]==0){
			isFlag = 0; break;
		}
		m[c]--;
	}
	printf("%s",(isFlag==1)?"true":"false");
	//// submit ==========
	// class Solution {
	// public:
	// 	bool canConstruct(string ransomNote, string magazine) {
	// 		unordered_map<char, int> freq;
	// 		for (char c : magazine) {
	// 			++freq[c];
	// 		}
	// 		for (char c : ransomNote) {
	// 			if (freq.find(c) == freq.end() || freq[c] == 0) {
	// 				return false;
	// 			}
	// 			--freq[c];
	// 		}
	// 		return true;
	// 	}
	// };
	//////////////////////////////////////////////////////////////



	// option array=============
	int isFlag =1;
	int array[30];
	memset(array,0,sizeof(array));
	for(char c:magazine){
		array[c-'a']++;
	}
	for(char c: ransomNote){
		if(array[c-'a'] == 0){
			isFlag = 0; break;
		}
		array[c-'a']--;
	}
	printf("%s",(isFlag==1)?"true":"false");
	/// submit =================================================================
	// class Solution {
	// public:
	// 	bool canConstruct(string ransomNote, string magazine) {
	// 		int array[300];memset(array,0,sizeof(array));
	// 		for(char c:magazine){
	// 			array[c-'a']++;
	// 		}
	// 		for(char c: ransomNote){
	// 			if(array[c-'a'] == 0){
	// 				return false;
	// 			}
	// 			array[c-'a']--;
	// 		}
	// 		return true;
	// 	}
	// };

}