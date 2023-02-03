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

void merge(LIST &L){
	LIST L1, L2, L3;
	init(L1); 
	init(L2);
	init(L3);
	cout <<"1" <<endl;
	createNode(L1);
	cout << "2" <<endl;
	createNode(L2);
	NODE *p = L1.pHead;
	NODE *k = L2.pHead;
	NODE *c = L3.pHead;
	while(p->link != NULL && k->link != NULL){
		if(p->data >= k->data){
			c->data = k->data;
			k = k->link;
			c=c->link;
		}else if(p->data < k->data){
			c->data = p->data;
			c=c->link;
			p=p->link;
		}
	}
	if(p->link != NULL){
		c->data = p->data;
		p = p->link;
		c=c->link;
	}else{
		c->data = k->data;
		k = k->link;
		c=c->link;
	}
	output(L3);
}

//submit
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
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* list = new ListNode(0);
//         ListNode* p = list;
//         while(list1 != NULL && list2 != NULL){
//             if(list1->val >= list2->val){
//                 p->next = list2;
//                 list2=list2->next;
//             }else{
//                 p->next=list1;
//                 list1=list1->next;
//             }
//             p=p->next;
//         }
//         if(list1 != NULL){
//             p->next = list1;
//         }else if(list2!=NULL){
//             p->next = list2;
//         }
//        return list->next;
//     }
// };
int main(){
	LIST L;
	init(L);
	cout <<"hahaha" << endl;

	cout <<"\nsort interchange: "<< endl;
	merge(L);
	return 0;  
}
