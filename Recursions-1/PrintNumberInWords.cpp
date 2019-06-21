#include<iostream>
using namespace std;
char a[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void Print(int n){
	if(n==0){
		return;
	}
	int num=n%10;
	cout<<a[num]<<endl;
	Print(n/10);
	cout<<a[num]<<endl;
}


int main(){
	int n;
	cin>>n;
	Print(n);
}
