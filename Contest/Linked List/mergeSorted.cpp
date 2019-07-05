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
 void print(node* head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
 }



node* merge(node* a,node* b){
	//base
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	
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
	int t;
	cin>>t;
	while(t--){
		node* head=NULL;
		node* head1=NULL;
		node* tail=NULL;
		node* tail1=NULL;
		
		int n1;
		int n2;
		cin>>n1;
		for(int i=0;i<n1;i++){
			int j;
			cin>>j;
			InsertAtEnd(head,tail,j);
		}
		cin>>n2;
		for(int i=0;i<n2;i++){
			int j;
			cin>>j;
			InsertAtEnd(head1,tail1,j);
		}

		node* p=merge(head,head1);
		
		print(p);
	
	
	}
	return 0;
}

