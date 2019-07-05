//Queue using linked list
#include<bits/stdc++.h>
using namespace std;
//class Queue{
//	node* head;
//	node* tail;
//	public:
//		
//	
//};

int main() {
	queue<int> q;
	//Queue q;
	q.push(0);
	q.push(1);
	q.push(2);
	q.push(3);
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}	
	return 0;
}

