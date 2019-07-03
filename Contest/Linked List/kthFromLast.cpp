#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int d):data(d),next(NULL){}
};

void InsertAtFront(node* &head,int data){
	if(head==NULL){
		node* n=new node(data);
		head=n;
	}
	else{
		node* n=new node(data);
		n->next=head;
		head=n;
	}
}
// void print(node* head){
//	while(head){
//		cout<<head->data<<"-->";
//		head=head->next;
// 	}
//	cout<<"NULL";
// }
 void InsertAtEnd(node* &head,node* &tail, int data){
 	if(head==NULL){
 		node* n=new node(data);
 		head=tail=n;
	 }
	 else{
	 	node* n=new node(data);
	 	tail->next=n;
	 	tail=n;
	 }
 }

void fromlast(node* head,int k){
	node* slow=head;
	node* fast=head;
	for(int i=0;i<k;i++){
		fast=fast->next;
	}
	while(fast){
		slow=slow->next;
		fast=fast->next;
	}
	cout<<slow->data;
	
}


int main() {
	node* head=NULL;
	node* tail=NULL;	
	int n;
	cin>>n;
	for(int i=0;n!=-1;i++){
		InsertAtEnd(head,tail,n);
	 	cin>>n;
	}
	int k;
	cin>>k;
	fromlast(head,k);
	return 0;
}

