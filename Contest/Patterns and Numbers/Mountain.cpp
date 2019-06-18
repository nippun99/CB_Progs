#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<'\t';
		}
		for(int s=1;s<=2*(n-i)-1;s++){
			cout<<" "<<'\t';	
		}
		for(int k=i;k>=1;k--){
			if(k==n){
				continue;
			}
			cout<<k<<'\t';
		}
		cout<<endl;
	}
return 0;
}
