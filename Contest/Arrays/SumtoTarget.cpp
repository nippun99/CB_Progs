#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	sort(a,a+n);
	int t;
	cin>>t;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==t){
				cout<<a[i]<<" and "<<a[j]<<endl;	
			}
		}
	}
	
	return 0;
}
