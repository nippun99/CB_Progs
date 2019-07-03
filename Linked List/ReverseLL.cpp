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


void ReverseLL(node* &head){
	node* c=head;
	node* n;
	node* p=NULL;
	while(c){
		n=c->next;
		c->next=p;
		p=c;
		c=n;
	}
	head=p;
}

int main() {
	node* head = NULL;

	InsertAtFront(head,18);
	InsertAtFront(head,100);
	InsertAtFront(head,10);
	InsertAtFront(head,20);
	InsertAtFront(head,6);
	InsertAtFront(head,0);
	InsertAtFront(head,5);
	InsertAtFront(head,2);
	InsertAtFront(head,1);


	// InsertAtFront(head1,10);
	// InsertAtFront(head1,9);
	// InsertAtFront(head1,7);
	// InsertAtFront(head1,5);
	// InsertAtFront(head1,3);

	// Print(head1);
	// head = merge(head,head1);
	// head = MergeSort(head);
	print(head);
	ReverseLL(head);
	print(head);



	
	return 0;
}



