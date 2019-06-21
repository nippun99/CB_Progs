#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int p[1000];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	int dec=m-1;
	int max=0;
	for(int i=0;i<n;i++){
		max+=p[i];
	}
	while(p[0]>0){
		p[0]=p[0]-dec;
		max=max-dec*n;
	}
	cout<<max;
	
	return 0;
}
