#include<iostream>
#include "node.h"
using namespace std;
class Stack{
	node* head;
	public:
		Stack(){
			head=NULL;
		}
		void push(int d){
			if(head==NULL){
				head=new node(d);
			}
			else{
				node* n=new node(d);
				n->next=head;
				head=n;
			}
		}
		void pop(){
			if(head!=NULL){
				node* temp=head;
				head=head->next;
				delete temp;
			}
		}
		
		int top(){
			return head->data;
		}
		
		bool empty(){
			return head==NULL;
		}
};

