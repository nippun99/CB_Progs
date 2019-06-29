#include<bits/stdc++.h>
using namespace std;
void splitarr(int a[],int n,int i,int sum1,int sum2){
	if(sum1==sum2){
		for(int k=0;k<=i-1;k++){
			cout<<a[k]<<" ";
		}
		cout<<"and ";
		for(int k=i;k<n;k++){
			cout<<a[k]<<" ";
		}
		cout<<endl;
	}
	//recursive
	sum1=0;
	sum2=0;
	for(int l=0;l<=i;l++){
		sum1+=a[l];
	}
	for(int l=i+1;l<n;l++){
		sum2+=a[l];
	}
	
	splitarr(a,n,i+1,sum1,sum2);
	
	
}

using namespace std;
int main() {
	int a[100];
	int n;
	cin>>n;
	for(int k=0;k<n;k++){
		cin>>a[k];
	}
	
	splitarr(a,n,0,2,0);
	return 0;
}

