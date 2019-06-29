#include<bits/stdc++.h>
using namespace std;
int suminc=0;
int sumexc=0;
split(int *a,int *inc, int *exc,int i,int j,int k){
	//base
	if(suminc==sumexc){
		
	}
	
	//recursive
	exc[k++]=a[i];
	split(a,inc,exc,i+1,j,k);
	inc[j++]=a[i];
	split(a,inc,exc,i+1,j,k);
	
	
	
}
int main() {
	int n;
	int a[100];
	int inc[100];
	int exc[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	split(a,inc,exc,0,0,0);
	return 0;
}

