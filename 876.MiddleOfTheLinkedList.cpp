/*Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.


Example
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.

Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.


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
NODE *list_element_mid(LIST L){
	NODE *p,*q;
	p=q= L.pHead;
	while(p && p->link-){
		q=q->link;
		p=p->link->link;
	}
	return q;
}

/// submit 
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
//     ListNode* middleNode(ListNode* head) {
//         ListNode *p, *q;
//         p = q = head;
//         while(p && p->next){
//             q=q->next;
//             p=p->next->next;
//         }
//         return q;
//     }
// };
int main(){
	LIST L;
	init(L);
	createNode(L);
	output(L); 
	cout << endl;
	NODE *p = list_element_mid(L);
	cout << p->data << endl;
	return 0;  
}
