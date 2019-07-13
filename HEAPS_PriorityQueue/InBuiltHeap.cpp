#include<iostream>
#include<queue>//because heap is priority queue
using namespace std;


class Comparator{
	public:
		//aka functor
		bool operator()(int a,int b){ //round bracks are overloaded
			return a>b;
		}
};

int main() {
//	priority_queue<int> h; //maxheap
	
	priority_queue<int,vector<int>,Comparator> h; //Min Heap
		
	h.push(10);
	h.push(0);
	h.push(20);
	h.push(15);
	h.push(-11);
	h.push(-17);
	
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
	
	
	return 0;
}

