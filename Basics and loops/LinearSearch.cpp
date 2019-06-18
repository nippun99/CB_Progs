#include<iostream>
using namespace std;
int main(){
	int a[100];
	int n;
	int s;
	int j,i;
	cin>>n;
	for(i=0;i<n;i++){
		int num;
		cin>>num;
		a[i]=num;
	}
	cout<<"No. to Search ";
	cin>>s;
	for(j=0;j<n;j++){
		if(a[j]==s){
			cout<<s<<" Exists at "<<j<<endl;
			break;
		}
	}
	if(j==n){
		cout<<s<<" Does not exist"<<endl;
	}
}
