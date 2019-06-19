#include<iostream>
using namespace std;
int f(int x,int n){
	if(n==0){
		return 1;
	}
	return x*f(x,n-1);
}
int main(){
	int x,n;
	cin>>x>>n;
	cout<<f(x,n);
}
