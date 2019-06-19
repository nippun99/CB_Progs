#include<iostream>
using namespace std;
void printarray(int *a,int n){
	if(n==0){
		return ;
	}
	//
	cout<<a[0]<<endl;
	printarray(a+1,n-1);
}
int main(){
	int a[]={1,2,3,4,5,6,7,8};
	int n=sizeof(a)/sizeof(int);
	printarray(a,n);
	return 0;
}
