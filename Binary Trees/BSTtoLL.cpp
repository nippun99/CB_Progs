#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node* right;
		node(int d){
			data=d;
			left=right=NULL;
		}
};

void PreOrder(node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}
void InOrder(node* root){
		if(root==NULL){
		return;
	}
	
	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);

}

void PostOrder(node* root){
		if(root==NULL){
		return;
	}
	
	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";

}
void LevelOrderPrint(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}

node* InsertInBST(node* root, int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}
	
	if(data<=root->data){
		root->left=InsertInBST(root->left,data);
	}
	else{
		root->right=InsertInBST(root->right,data);
	}
	return root;
}

node* BuildTree(){
	node* root=NULL;
	
	int data;
	cin>>data;
	while(data!=-1){
		root= InsertInBST(root,data);
		cin>>data;
		
	}
	return root;
}

class LinkedList{
	public:
		node* head;
		node* tail;
};

LinkedList BstToLL(node* root){
	LinkedList l;
	// Base case
	if(root == NULL){
		l.head=l.tail=NULL;
		return l;
	}
	// Recursive case
	if(root->left!=NULL && root->right==NULL){
		LinkedList left = BstToLL(root->left);
		left.tail->right = root;
		l.head =left.head;
		l.tail =root;
		return l;
	}
	else if(root->left == NULL && root->right!=NULL){
		LinkedList right = BstToLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
		return l;
	}
	else if(root->left==NULL && root->right == NULL){
		l.head = l.tail = root;
		return l;
	}
	else{
		LinkedList left = BstToLL(root->left);
		LinkedList right = BstToLL(root->right);
		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
}

void Print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head=head->right;
	}
	cout<<endl;
}


int main() {
	// 8 3 10 1 6 14 4 7 13 -1
	node* root=BuildTree();
//	PreOrder(root);
//	cout<<endl;
//	LevelOrderPrint(root);
//	cout<<endl;
//	if(isBST(root)){
//		cout<<"BST";
//	}
//	else{
//		cout<<"NOT BST";
//	}
	
	LevelOrderPrint( root);
	LinkedList l = BstToLL(root);
	Print(l.head);



//	Pair p;
//	p=isBalanced(root);
//	if(p.balanced){
//		cout<<"Balanced";
//	}
//	else{
//		cout<<"Unbalanced";
//	}
	return 0;
}

