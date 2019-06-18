#include<iostream>
using namespace std;
int main(){
	int a[10];
	int n;
	for(int i=0;i<10;i++){
		cin>>n;
		a[i]=n;
	}
	for(int j=9;j>=0;j--){
		cout<<a[j]<<endl;
	}
}
