#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		
		node(int d):data(d),next(NULL){}
};
int length(node *head){
	int count=0;
	while(head){
		count++;
		head=head->next;
	}
	return count;
}

void  InsertAtFront(node* &head,int data){
	node *n=new node(data);
	n->next=head;
	head=n;
}

void print(node *head){
	while(head){
		cout<<head->data<<"-->";
		head=head->next;
		
	}
	cout<<"NULL"<<endl;
}

node* merge(node* a,node* b){
	//base
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	//Recursive Case
	node* c;
	if(a->data<b->data){
		c=a;
		c->next=merge(a->next,b);
	}
	else{
		c=b;
		c->next=merge(a,b->next);
	}
	return c;
}



int main() {
	node *head=NULL;
	//incomp.
	InsertAtFront(head,8);
	InsertAtFront(head,6);
	InsertAtFront(head,4);
	InsertAtFront(head,2);
	InsertAtFront(head,1);
	
	node *head1=NULL;
	InsertAtFront(head1,7);
	InsertAtFront(head1,5);
	InsertAtFront(head1,3);
	head=merge(head,head1);
	print(head);
	
	return 0;
}

