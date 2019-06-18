#include<iostream>
using namespace std;
int main(){
	int a[]={5,3,4,0,2,1};
	int n=sizeof(a)/sizeof(int);
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+ *(a+i);
	}

	for(int i=0;i<n;i++){
		cout<<*(a+i)<<endl;
	}
	cout<<sum;
return 0;
}