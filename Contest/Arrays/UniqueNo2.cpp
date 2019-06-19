#include<iostream>
using namespace std;
int main(){
	int n;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x=0;
	for(int i=0;i<n;i++){
		x=x^a[i];
	}
	int y=x & (~(x-1));
	int ar0[100];
	int ar1[100];
	int k=0;
	int l=0;
	for(int i=0;i<n;i++){
		if(a[i]^y==0){
			ar0[k]=a[i];
			k++;
		}
		else{
			ar1[l]=a[i];
			l++;
		}
	} 
	int res1=0;
	int res2=0;
	for(int i=0;i<k;i++){
		res1=res1^ar0[i];
	}
	cout<<res1<<endl;
	for(int i=0;i<l;i++){
		res2=res2^ar1[i];
	}
	cout<<res2<<endl;
	
	
	return 0;
}
