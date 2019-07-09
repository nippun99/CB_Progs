#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node * next;
	node(int d):data(d),next(NULL){}
};
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


//peeche se kth ke pehle vaale ka pointer
node* kfromlast(int k,node* head){
	node* fast=head->next;
	node* slow=head;
	for(int i=0;i<k;i++){
			fast=fast->next;
		}
	while(fast!=NULL){
		slow=slow->next;
		fast=fast->next;
	}
	return slow;
}

int main() {
	int k;
	int n;
	node* head=NULL;
	node* tail=NULL;
	cin>>n;
	for(int i=0;i<n;i++){
		int d;
		cin>>d;
		InsertAtEnd(head,tail,d);
	}
	
	cin>>k;
	k=k%n;
	
	node* l=kfromlast(k,head);
	tail->next=head;
	head=l->next;
	l->next=NULL;
	tail=l;
	Print(head);
	

	
	
	
	return 0;
}

