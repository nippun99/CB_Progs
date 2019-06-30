#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	int a[100000];
	int count=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	reverse(a,a+n);
	for(int i=0;i<=n-2;i++){
		for(int j=i;j<=n-1;j++){
			if(a[i]-a[j]==k){
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}

