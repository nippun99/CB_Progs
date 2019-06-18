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

void PrintPrime(int N){
	for(int i=2;i<=N;i++){
		if(CheckPrime(i)){
			cout<<i<<endl;
		}
	}
}
int main(){
	int n;
	cin>>n;
	PrintPrime(n);
return 0;
}
