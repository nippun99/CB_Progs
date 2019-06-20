#include<iostream>
using namespace std;
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int c[100];
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	int b[100];
	for(int i=0;i<n;i++){
		b[a[i]]=i;
	}
	int i;
	for(i=0;i<n;i++){
		if(c[i]!=b[i]){
			cout<<"false";
			break;
		}
	}
	if(i==n){
		cout<<"true";
	}
}
