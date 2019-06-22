//Phone KeyPad
#include<bits/stdc++.h>
using namespace std;

int f(int n,int k){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	
	//recursive case
	int sum=0;
	for(int i=1;i<=k;i++){
		sum=sum+f(n-i,k);
	}
	return sum;
	
}

int main(){
	int n,k;
	cin>>n;
	cin>>k;
	cout<<f(n,k);	
	return 0;
}
