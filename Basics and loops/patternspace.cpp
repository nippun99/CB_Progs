#include<bits/stdc++.h>
using namespace std;

int main(){
int n,l,s,i,d;
cin>>n;
for(l=1;l<=n;l++){
	for(s=1;s<=n-l;s++){
		cout<<" ";
	}
	for(i=l;i<=2*l-1;i++)
	{
		cout<<i;
	}
	for(d=2*l-2;d>=l;d--){
		cout<<d;
	}
	cout<<'\n';
}
return 0;
}
