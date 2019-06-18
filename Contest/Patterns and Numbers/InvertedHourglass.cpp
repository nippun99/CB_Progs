#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	//up
	for(int l=n;l>=0;l--){
		for(int j=n;j>=l;j--){
			cout<<j<<" ";
		}
		for(int s=1;s<=2*l-1;s++){
			cout<<"  ";
		}
		for(int k=l;k<=n;k++){
			if(k==0){
				continue;
			}
			cout<<k<<" ";
		}
		cout<<endl;
	}
	
	//down
	for(int l=1;l<=n;l++){
		for(int j=n;j>=l;j--)
		{
			cout<<j<<" ";
		}
		for(int s=1;s<=2*l-1;s++){
			cout<<"  ";
		}
		for(int k=l;k<=n;k++){
			cout<<k<<" ";
		}
		cout<<endl;
	}
}
