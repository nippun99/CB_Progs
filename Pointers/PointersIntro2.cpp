#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *aptr=&a;
	
	float b=20.2;
	float *bptr=&b;
	
	char ch='A';
	char *chptr=&ch;
	cout<<(int*)&ch<<endl;
	cout<<(void*)chptr<<endl;
	return 0;
}
