#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int d):data(d),next(NULL){}
};

int length(node* head){
	int count=0;
	while(head){
		count++;
		head=head->next;
	}
	return count;
}

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
		cout<<head->data<<" ";
		head=head->next;
	}	
 }

void BubbleSort(node* &head){
	int ct=length(head);
	node* c;
	node* p;
	node* n;
	for(int i=0;i<=ct-2;i++){
		c=head;
		p=NULL;
		while(c && c->next){
			n=c->next;
			if(c->data > n->data){
				//Swap
				if(p==NULL){
					//head bhi change
					c->next=n->next;
					n->next=c;
					head=p=n;
					
				}
				else{
					//simple swap
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else{
				//no swap
				p=c;
				c=c->next;
			}
		}
	}		
	
}


int main() {
	node* head=NULL;
	int n;
	cin>>n;
	int j;
	for(int i=0;i<n;i++){
		cin>>j;
		InsertAtFront(head,j);
	}
	BubbleSort(head);
	print(head);
	return 0;
}

