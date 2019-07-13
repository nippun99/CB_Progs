#include<bits/stdc++.h>
using namespace std;
//Alternate
class Comparator{
	public:
		//aka functor
		bool operator()(int a,int b){ //round bracks are overloaded
			return a>b;
		}
};
void Print(priority_queue<int,vector<int>,Comparator> h){
	int count=0;
	while(count<3){
		cout<<h.top()<<" ";
		h.pop();
		count++;
	}
}

int main() {
	priority_queue<int,vector<int>,Comparator> h; //Min Heap
	int k=3;
	int number;
	int i=0;
	h.push(INT_MAX);
	while(i++<50){
		int d;
		cin>>d;
		if(d==-1){
			Print(h);
		}
		else if(d<h.top()){
			h.push(d);
		}
		
	}	
	
	return 0;
}

