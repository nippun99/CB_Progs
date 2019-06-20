#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x=0;
	for(int i=0;i<n;i++){
		x=x^a[i];
	}
	int y=x & (~(x-1));
	int res[2]={0};
	for(int i=0;i<n;i++){
		if(a[i]&y){
			res[0]=res[0]^a[i];
		}
		else{
			res[1]=res[1]^a[i];
		}
	} 
	if(res[0]>res[1]){
		swap(res[0],res[1]);
	}
	cout<<res[0]<<" "<<res[1]<<endl;
	return 0;
}
