//Hitler Pattern
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n/2;i++){
		cout<<"*";
		for(int j=1;j<=n/2-1;j++){
			cout<<" ";
		}
		if(i==1){
			for(int s=1;s<=n/2+1;s++){
				cout<<"*";
			}
		}
		else{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		cout<<"*";
	}
	cout<<endl;
	
	for(int i=1;i<=n/2;i++){
		if(i!=n/2){

		for(int s=1;s<=n/2;s++){
			cout<<" ";
		}
	}
	else{
			for(int s=1;s<=n/2;s++){
			cout<<"*";
		}	
	}
	cout<<"*";
	for(int j=1;j<=n/2-1;j++){
			cout<<" ";
		}
	cout<<"*";
	cout<<endl;
	}
	
	return 0;
}
