#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	//up
	for(int l=1;l<=n;l++){
		for(int s=1;s<=n-l;s++){
			cout<<" "<<'\t';
		}
		
		for(int i=l;i<=2*l-1;i++){
			cout<<i<<'\t';
		}
		
		for(int d=2*l-2;d>=l;d--){
			cout<<d<<'\t';
		}
		cout<<endl;
	}
	//down
	for(int l=1;l<=n-1;l++){
		for(int s=1;s<=l;s++){
			cout<<" "<<'\t';
		}
		for(int i=n-l;i<=2*(n-l)-1;i++){
			cout<<i<<'\t';
		}
		for(int d=2*(n-l)-2;d>=(n-l);d--){
			cout<<d<<'\t';
		}
		cout<<endl;
	}
	
}
