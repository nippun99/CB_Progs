#include<bits/stdc++.h>
using namespace std;
int ans[100][100];
int ct=0;
int itr[100];
void findsum(int a[],int n, int k,int op[],int i, int j){
	if(n==i){
		int sum=0;
		for(int l=0;l<j;l++){
			sum+=op[l];	
		}
		if(sum==k){
			int l;
			for(l=0;l<j;l++){
				ans[ct][l]=op[l];
			}
			itr[ct]=l;
			ct++;	
		}
		return;
	}
	//Recursive 
	findsum(a,n,k,op,i+1,j);
	op[j++]=a[i];
	findsum(a,n,k,op,i+1,j);
	
}
int main() {
	int n,k,a[100],op[100];
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	findsum(a,n,k,op,0,0);

	
	for(int i=ct-1;i>=0;i--){
		for(int j=0;j<itr[i];j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<" ";
	}
	cout<<endl;
	cout<<ct<<endl;	
	return 0;
}
