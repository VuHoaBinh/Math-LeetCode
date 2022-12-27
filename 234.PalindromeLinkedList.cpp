/*A bracket sequence is called regular if it is possible to obtain correct arithmetic expression by inserting characters «+» and «1» 
into this sequence. For example, sequences «(())()», «()» and «(()(()))» are regular, while «)(», «(()» and «(()))(» are not.

One day Johnny got bracket sequence. He decided to remove some of the brackets from it in order to obtain a regular bracket sequence. 
What is the maximum length of a regular bracket sequence which can be obtained?

Input
Input consists of a single line with non-empty string of «(» and «)» characters. Its length does not exceed 106.

Output
Output the maximum possible length of a regular bracket sequence.


Example
Input: 
(()))(
Output: 4

Input: ((()())
Output: 6

*/
#include<bits/stdc++.h>
using namespace std;

typedef struct NODE{
	int data;
	NODE* link;
}NODE;
typedef struct LIST{
	NODE* pHead;
	NODE* pTail;
}LIST;

void init(LIST &L){
	L.pHead = L.pTail = NULL;
}
int Empty(LIST L){
	if(L.pHead == NULL){
		return 1;
	}
	return 0;
}
NODE* getNode(int x){
	NODE *p = new NODE;
	if(p==NULL){
		cout <<"full data!!" <<endl;
		return NULL;
	}
	p->data = x;
	p->link = NULL;
	return p;
}
void addHead(LIST &L,NODE *new_node){
	if(L.pHead == NULL){
		L.pHead =L.pTail =new_node;
	}else{
		new_node->link = L.pHead;
		L.pHead = new_node;
	}
}

void insertNode(LIST &L, int x){
	NODE *p = getNode(x);
	if(p==NULL){
		return;
	}
	addHead(L,p); 
}

void createNode(LIST &L){
	int x,n;
	cout <<"Enter quantity: "; cin >> n;
	for( int i = 0; i < n; i++){
		cin >> x;
		insertNode(L,x);
	}
	cout <<"list: " << endl;
}
void output(LIST L){
	NODE *p = new NODE;
	for(NODE *p = L.pHead ;p!=NULL;p=p->link){
		cout << p->data << " ";
	}

}
////////////  Stack ///////////////////////////////////////////////////////


/// idea  =========================
int palindrome(LIST L){
	stack<int>s;
	NODE *p=L.pHead;
	NODE *k=L.pHead;
	while(p!=NULL){
		s.push(p->data);// push to stack
		p=p->link;
	}
	while(k!=NULL){
		int flag_number = s.top();
		s.pop();
		if(k->data!=flag_number){
			return -1;
		}
		k=k->link;
	}
	return 1;
}

//  === submit ==========================================
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         stack<int>s;
//         ListNode *p=head;
//         ListNode *k=head;
//         while(p!=NULL){
//             s.push(p->val);
//             p=p->next;
//         }
//         while(k!=NULL){
//             int flag_number = s.top();
//             s.pop();
//             if(k->val!=flag_number){
//                 return false;
//             }
//             k=k->next;
//         }
//         return true;
//     }
// };
////////////////////////////////////////////////////////////////////////////////////



int main(){
	LIST L;
	init(L);
	createNode(L);
	output(L); 

	int x =palindrome(L);
	//output(L); 
	if(x==1){
		cout << "True";
	}else
		cout << "False";
	return 0;  
}






