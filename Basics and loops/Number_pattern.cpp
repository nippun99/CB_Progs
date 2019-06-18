#include<bits/stdc++.h>
using namespace std;

int main(){
int i,j,n;
cin>>n;
int p=1;
for(i=0;i<n;i++){
	for(j=0;j<i+1;j++){
	cout<<p++<<' ';
	}
	cout<<'\n';
}
return 0;
}
