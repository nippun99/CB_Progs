#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int d):data(d),next(NULL){
		};
};

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
 
int length(node* head){
	int count=0;
	while(head){
		count++;
		head=head->next;
	}
	return count;
}

void DeleteAt(node* &head,node* &tail,int pos){
	if(pos==0){
		node* temp=head;
		head=head->next;
		delete temp;
	}
	else if(pos==length(head)-1){
		node* temp=head;
		for(int i=0;i<pos-1;i++){
			temp=temp->next;
		}
		temp->next=NULL;
		node* temp1=tail;
		tail=temp;
		delete temp1;
	}
	else if(pos>=length(head)){
		return;
	}
	else{
		node* temp=head;
		for(int i=0;i<pos-1;i++){
			temp=temp->next;
		}
		node* temp1=temp->next;
		temp->next=temp->next->next;
		delete temp1;		
	}
	
}

void Print(node* head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main() {
	int n,q;
	cin>>n>>q;
	node* head=NULL;
	node* tail=NULL;
	for(int i=0;i<n;i++){
		int dat;
		cin>>dat;
		InsertAtEnd(head,tail,dat);
	}
	for(int i=0;i<q;i++){
		int pos;
		cin>>pos;
		DeleteAt(head,tail,pos);
		Print(head);	
	}

	
	return 0;
}

