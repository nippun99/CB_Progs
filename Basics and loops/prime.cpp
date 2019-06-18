#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i;
int p=0;
cin>>n;
for(i=2;i<n;i++){
	if(n%i==0){
		cout<<"Not Prime";
		break;
	}
}
if(i==n){
	cout<<"Prime";
}
return 0;
}
