//basics of Functions
#include<iostream>
using namespace std;

void Hello();
void add(int ,int );
int addr(int ,int);
int main(){
	Hello();
	int a=20;
	int b=30;
	add(a,b);
	int z=addr(a,b);
	cout<<z<<endl;
	return 0;
}

int addr(int x,int y){
	return (x+y);
}
void add(int a,int b){
	cout<<a+b<<endl;
}

void Hello(){
	cout<<"Hello World"<<endl;
}
