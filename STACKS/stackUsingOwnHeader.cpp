#include<iostream>
#include "stack.h"
using namespace std;
int main() {
	Stack s;
	
	s.push(0);
	s.push(1);
	s.push(2);
	s.push(3);
	
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}

