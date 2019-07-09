#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node * next;
	node(int d):data(d),next(NULL){}
};
node* mid(node* head){
	if(head==NULL){
		return NULL;
	}
	node* slow = head;
	node* fast = head->next;

	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow = slow->next;
	}
	return slow;
}
node* merge(node* a,node* b){
	// Base case
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	// Recursive case
	node* c;
	if(a->data<b->data){
		c = a;
		c->next = merge(a->next,b);
	}
	else{
		c = b;
		c->next = merge(a,b->next);
	}
	return c;
}

node* MergeSort(node* head){
	// Base case
	if(head->next == NULL || head == NULL){
		return head;
	}
	// Recursive case
	// 1. Divide
	node* m = mid(head);
	node* a = head;
	node* b = m->next;
	m->next = NULL;
	// 2. Sort
	a = MergeSort(a);
	b = MergeSort(b);
	// 3. Merge
	node* newHead = merge(a,b);
	return newHead;
}

void InsertAtEnd(node* &head,node* &tail,int data){
	if(head==NULL){
		node* n=new node(data);
		head = tail = n;
	}
	else{
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}	
}

void Print(node* head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main() {
	node* head=NULL;
	node* tail=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int d;
		cin>>d;
		InsertAtEnd(head,tail,d);
	}
		node* newhead=MergeSort(head);
	
	Print(newhead);


	return 0;
}

