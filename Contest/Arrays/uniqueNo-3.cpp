#include<iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i=i+3){
		if(i==n-1){
			cout<<a[i];
			break;
		}
		else{
		
		int res=a[i]^a[i+1]&a[i+2];
		if(res!=0){
			cout<<a[i];
			break;
		}
	}
	}

}
