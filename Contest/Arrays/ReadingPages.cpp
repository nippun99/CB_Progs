#include<iostream>
using namespace std;
int main(){
	long long int n,m;
	cin>>n>>m;
	long long int p[1000];
	for(long long int i=0;i<n;i++){
		cin>>p[i];
	}
	long long int dec=m-1;
	long long int max=0;
	for(long long int i=0;i<n;i++){
		max+=p[i];
	}
	while(p[0]>0){
		p[0]=p[0]-dec;
		max=max-dec*n;
	}
	cout<<max;
	
	return 0;
}
