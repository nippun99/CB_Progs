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
		cout<<head->data<<"-->";
		head=head->next;
	}
	
	 	
	cout<<"NULL";
 }



int main() {
	int t;
	cin>>t;
	while(t--){
		node* head=NULL;
		node* head1=NULL;
		int n1;
		int n2;
		for(int i=0;i<n1;i++){
			int j;
			cin>>j;
			InsertAtFront(head,j);
		}
		for(int i=0;i<n2;i++){
			int j;
			cin>>j;
			InsertAtFront(head1,j);
		}
		
		
		
		print(head);
	
	
	}
	return 0;
}

