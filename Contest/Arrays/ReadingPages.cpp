#include<bits/stdc++.h>
using namespace std;
bool check(long long int *a,int n,int m,int mid){
	int sr=1;
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]>mid){
			return false;
		}
		if(sum+a[i]>mid){
			sr++;
			sum=a[i];
			if(sr>m){
				return false;
			}
		}
		else{
			sum+=a[i];
		}
		
	}
	return true;
}
int main(){
	int n,m;
	cin>>n>>m;
	long long int a[100000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=0;
	for(int i=0;i<n;i++){
		max+=a[i];
	}
	int s=0;
	int end=max;
	int ans[100];
	int k=0;
	int mid;
	while(s<=end){
	
	mid=(s+end)/2;
	if(check(a,n,m,mid)){
		ans[k++]=mid;
		end=mid-1;
	}
	else{
		s=mid+1;
	}
}
if(ans[k-1]<ans[k-2]){
	cout<<ans[k-1];
}
else{
	cout<<ans[k-2];
}

	
	
}
