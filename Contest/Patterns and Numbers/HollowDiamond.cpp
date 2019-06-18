#include<iostream>
using namespace std;
int main(){
	int n,ip;
	cin>>ip;
	n=ip/2 +1;
	//up
	for(int l=0;l<n;l++){
		for(int i=0;i<n-l;i++){
			cout<<"*"<<'\t';
		}
		for(int s=0;s<2*l-1;s++){
			cout<<" "<<'\t';
		}
		
		for(int j=0;j<n-l;j++){
			if(j==0&&l==0){
				continue;
			}
			cout<<"*"<<'\t';

		}
		cout<<endl;
	}
	//down
	for(int l=1;l<=n-1;l++){
		for(int i=1;i<=l+1;i++){
			cout<<"*"<<'\t';
		}
		for(int s=1;s<=2*(n-l-1)-1;s++){
			cout<<" "<<'\t';
		}
		for(int j=1;j<=l+1;j++){
			if((l==(n-1)) &&(j==1) ){
				continue;
			}
			cout<<"*"<<'\t';
		}
		cout<<endl;
	}
}
