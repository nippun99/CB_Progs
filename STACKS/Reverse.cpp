#include<bits/stdc++.h>
using namespace std;
void pushBottom(stack<int> &s,int topElement){
	if(s.empty())
}

void ReverseAStack(stack<int> &s){
	if(s.empty()){
		return;
	}
	
	int topElement=s.top();
	s.pop();
	ReverseAStack(s);
	pushBottom(s,topElement);
}

void Print(stack<int> &s){
	if(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
		return;
	}
}
int main() {
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);	
 	return 0;
}

