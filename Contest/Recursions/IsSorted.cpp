#include<iostream>
using namespace std;
bool issorted(int* a,int n){
	if(n==1){
		return true;	
	}
	//Recursive case
	if(a[0]<a[1]){
		issorted(a+1,n-1);
	}
	else{
		return false;
	}
	
}


int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(issorted(a,n)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}
