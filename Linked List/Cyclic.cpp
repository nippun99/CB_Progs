#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		
		node(int d):data(d),next(NULL){}
};

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


void CreateCycle(){
	
}

void BreakCycle(node* head){
	node* fast=head;
	node* slow=head;
	while(fast){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			break;
		}
	}
	node *p=head;
	//setting p
	while(p->next!=fast){
		p=p->next;
	}
	
	
	
}

int main() {
	node* head = NULL;

	InsertAtFront(head,8);
	InsertAtFront(head,7);
	InsertAtFront(head,6);
	InsertAtFront(head,5);
	InsertAtFront(head,4);
	InsertAtFront(head,3);
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


	
	return 0;
}



