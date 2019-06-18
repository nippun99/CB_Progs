#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	int f=1;
	for(int i=1;i<=n;i++){
		f*=i;
	}
	return f;
}

int nCr(int n,int r){
	int res;
	res=fact(n)/(fact(r)*fact(n-r));
	return res;
}
int main(){
	int n,r;
	cin>>n>>r;
	cout<<nCr(n,r);
return 0;
}
