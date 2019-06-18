#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    //up
    for(int l=0;l<=n;l++){
    	for(int s=0;s<l;s++){
    		cout<<" ";
		}
		for(int i=n-l;i>=0;i--){
			cout<<i<<" ";
		}
		for(int d=1;d<=n-l;d++){
			cout<<d<<" ";
		}
		cout<<endl;
	}
	//down
	for(int l=1;l<=n;l++){
		for(int s=0;s<n-l;s++){
    		cout<<" ";
		}
		for(int i=l;i>=0;i--){
			cout<<i<<" ";
		}
		for(int d=1;d<=l;d++){
			cout<<d<<" ";
		}
		cout<<endl;
	}
}
