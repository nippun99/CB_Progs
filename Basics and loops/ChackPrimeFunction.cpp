#include<bits/stdc++.h>
using namespace std;
bool CheckPrime(int n){
	int i;
	for( i=2;i<n;i++){
	if(n%i==0){
		return false;
		break;
	}
}
if(i==n){
	return true;
}
}
int main(){
	int n;
	cin>>n;
	cout<<CheckPrime(n)<<endl;
return 0;
}
