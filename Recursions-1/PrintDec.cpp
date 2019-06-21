#include<iostream>
using namespace std;
void printarray(int *a,int n){
	if(n==0){
		return ;
	}
	//
	cout<<a[n-1]<<endl;
	printarray(a,n-1);
}
int main(){
	int a[]={1,2,3,4,5,6,7,8};
	int n=sizeof(a)/sizeof(int);
	printarray(a,n);
	return 0;
}
