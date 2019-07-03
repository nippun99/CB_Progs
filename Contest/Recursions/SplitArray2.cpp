#include<bits/stdc++.h>
using namespace std;
int suminc=0;
int sumexc=0;
int coun=0;
void split(int *a,int *inc, int *exc,int i,int j,int k,int n){
	//base
	if(n==0){
		int suminc=0;
		int sumexc=0;
		inc[j]=0;
		exc[k]=0;
		int k1,k2;	
		for(k1=0;inc[k1]!=0;k1++){
			suminc+=inc[k1];		
		}
		for(k2=0;exc[k2]!=0;k2++){
			sumexc+=exc[k2];	
		}
		if(sumexc==suminc){
			for(int l=0;l<k1;l++){
				cout<<" "<<inc[l];		
			}
			cout<<" and";
			for(int l=0;l<k2;l++){
				cout<<" "<<exc[l];
			}
			cout<<endl;
			coun++;
		}
	return;	
	}

	
	
	//recursive
	exc[k]=a[i];
	inc[j]=a[i];
	split(a,inc,exc,i+1,j+1,k,n-1);
	exc[k]=a[i];
	inc[j]=a[i];
	split(a,inc,exc,i+1,j,k+1,n-1);
	
	
	
	
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
	
	split(a,inc,exc,0,0,0,n);
	cout<<coun;
	return 0;
}

