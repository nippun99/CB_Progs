#include<iostream>
using namespace std;
//&z=a is different from adderess of operator which is     int* z = &a

void change(int &z ){   //this means we are changeing the name of a as 'z' and then doing operations rather than making a copy of a in z
// a ke ghar pe jaake jiska naam ab z hai changes karunga      &z=a
	z=50;
}

int main(){
	int a=10;
	cout<<a<<endl;
	
	change(a);
	
	cout<<a<<endl;
	
	return 0;
}
