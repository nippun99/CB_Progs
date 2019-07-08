//Binary Trees
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


node* CreateTree(){
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	node* root =new node(data);
	root->left=CreateTree();
	root->right=CreateTree();
	return root;
}
//Counting Nodes

int CountNodes(node* root){
	if(root==NULL){
		return 0;
	}
	return CountNodes(root->left)+CountNodes(root->right)+1;
}

int Height(node* root){
	if(root==NULL){
		return 0;
	}
	int left =Height(root->left);
	int right=Height(root->right);
	return max(left,right)+1;
}


int Diameter(node* root){
	if(root==NULL){
		return 0;
	}
	int op1=Height(root->left)+Height(root->right);
	int op2= Diameter(root->left);
	int op3=Diameter(root->right);
	return max(op1,max(op2,op3));
	
}

class Pair{
	public:
		int Height;
		int Diameter;
		
};

Pair FastDiameter(node* root){
	Pair p;
	if(root==NULL){
		p.Height=p.Diameter=0;
		return p;
	}
	Pair left= FastDiameter(root->left);
	Pair right=FastDiameter(root->right);
	p.Height=max(left.Height,right.Height)+1;
	int op1= left.Height +right.Height;
	int op2=left.Diameter;
	int op3=right.Diameter;
	
	p.Diameter=max(op1,max(op2,op3));
	return p;
	
}

int main() {
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 
node* root=CreateTree();	
PreOrder(root);
cout<<endl;
InOrder(root);
cout<<endl;
PostOrder(root);
cout<<endl;

cout<<CountNodes(root);
cout<<endl;
cout<<Height(root);
cout<<endl;
cout<<Diameter(root);
cout<<endl;
Pair p;
cout<<"Fast Height"<<FastDiameter(root).Height<<endl;
cout<<"Fast Diameter"<<FastDiameter(root).Diameter<<endl;

	return 0;
}

