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
		head=tail=n;
	}
	else{
		node* n=new node(data);
		tail->next=n;
		tail=n;
	}
	
}


 void print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head=head->next;
	}
	
	 	
	cout<<"NULL";
 }

int Intersection(node* head,node* head1,node* tail,node* tail1,int n1,int n2){
    node* a=head;
	for(int i=0;i<n1;i++){
	
		node* b=head1;
		for(int j=0;j<n2;j++){
			if(a->data==b->data){
				return a->data;
			}
			b=b->next;
		}
		a=a->next;
	}
	return -1;
}



int main() {
	
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
	
	
	cout<<Intersection(head,head1,tail,tail1,n1,n2);
	
	
	return 0;
}

