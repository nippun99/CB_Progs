#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		//constructor
		node(int d):data(d),next(NULL){
			//Or write data=d;
		}
};


void InsertAtFront(node* &head,node* &tail,int data){
	//if Linked List doesnt exist
	if(head==NULL){
		node* n=new node(data);
		head =tail =n;
	}
	else{
		node *n= new node(data);
		n->next=head;
		head=n;
	}

}

void InsertAtEnd(node* &head,node* &tail,int data){
	if(head==NULL){
		node* n=new node(data);
		head =tail =n;
	}
	else{
		node *n = new node(data);
		tail->next=n;
		tail=n;
	}
	
}
int length(node *head){
	int count=0;
	while(head){
		count++;
		head=head->next;
	}
	return count;
}

void InsertAtMid(node* &head,node* tail,int pos,int data){
	if(pos==0){
		InsertAtFront(head,tail,data);
	}
	else if(pos>=length(head)){
		InsertAtFront(head,tail,data);
	}
	else{
		int jump=1;
		node *temp=head;
		while(jump<=pos-1){
			temp=temp->next;
			jump++;
		}
		node *n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}

}

void print(node *head){
	while(head){
		cout<<head->data<<"-->";
		head=head->next;
		
	}
	cout<<"NULL"<<endl;
}

int main() {
	node* head=NULL;
	node* tail=NULL;
	
	InsertAtFront(head,tail,0);
	InsertAtFront(head,tail,1);
	InsertAtFront(head,tail,2);
	InsertAtFront(head,tail,3);
	InsertAtFront(head,tail,4);
	InsertAtEnd(head,tail,5);
	InsertAtEnd(head,tail,6);
	
	print(head);
	InsertAtMid(head,tail,3,20);
	print(head);
	
	return 0;
}

