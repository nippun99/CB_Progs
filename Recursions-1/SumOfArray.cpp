#include<iostream>
using namespace std;

int Sum(int *a,int n){
	if(n==0){
		return 0;
	}
	//recursive case
	return a[0]+Sum(a+1,n-1);
}

int main(){
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);
	
	cout<<Sum(a,n)<<endl;	
}
