#include<bits/stdc++.h>
using namespace std;
int suminc=0;
int sumexc=0;
bool split(int *a,int *inc, int *exc,int i,int j,int k,int n,int suminc,int sumexc){
	//base
	if(i==n){
		if(sumexc==suminc){
			for(int l=0;l<j;l++){
				cout<<inc[l]<<" ";
			}
			cout<<"and ";
			for(int l=0;l<k;l++){
				cout<<exc[l]<<" ";
			}
			cout<<endl;
		}
		return false;
	}
	
	//recursive
	exc[k++]=a[i];
	bool res=split(a,inc,exc,i+1,j,k,n,suminc,sumexc+a[i]);
	if(res)
		return res;
	inc[j++]=a[i];
	res=split(a,inc,exc,i+1,j,k,n,suminc+a[i],sumexc);
	
	if(res==false){
		if(inc[0]){
			j--;
		}
	}
	
	return res;
	
	
	
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

