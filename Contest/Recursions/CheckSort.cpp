#include<bits/stdc++.h>
using namespace std;
bool checkSort(int a[],int n){
	if(n==0 || n==1){
		return true;
	}
	//Recursive Case
	if(a[0]>a[1]){
		return false;
	}
	checkSort(a+1,n-1);
}
int main() {
	int n;
	cin>>n;
	int a[1000];
	for(int k=0;k<n;k++){
		cin>>a[k];
	}
	if(checkSort(a,n)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}

