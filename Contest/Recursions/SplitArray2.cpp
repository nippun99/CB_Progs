#include<bits/stdc++.h>
using namespace std;
int suminc=0;
int sumexc=0;
void split(int *a,int *inc, int *exc,int i,int j,int k,int n){
	//base
	if(i==n){
		for(int l=0;l<j;l++){
					
		}
		for(int l=0;l<k;l++){
			cout<<exc[l]<<" ";
		}
		cout<<endl;
	}
	
	//recursive
	exc[k++]=a[i];
	split(a,inc,exc,i+1,j,k,n);
	inc[j++]=a[i];
	split(a,inc,exc,i+1,j,k,n);
	
	
	
	
}
int main() {
	int n;
	cin>>n;
	int a[100];
	int inc[100];
	int exc[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	split(a,inc,exc,0,0,0,n,0,0);
	return 0;
}

