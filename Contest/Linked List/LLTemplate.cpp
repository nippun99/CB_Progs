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
 void print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head=head->next;
	}
	
	 	
	cout<<"NULL";
 }



int main() {
	node* head=NULL;
	for(int i=0;i<7;i++){
		InsertAtFront(head,i);
	}
	print(head);
	return 0;
}

