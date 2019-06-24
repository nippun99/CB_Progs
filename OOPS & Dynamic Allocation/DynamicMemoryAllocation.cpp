#include<iostream>
using namespace std;

int *CreateArray(int n){
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		arr[i]=i+1;
	}
	return arr;
}
int main(){
	int n;
	cin>>n;
	int *arr1=CreateArray(n);
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	delete []arr1;
	cout<<"  ";
	arr1=NULL;
	return 0;
}
