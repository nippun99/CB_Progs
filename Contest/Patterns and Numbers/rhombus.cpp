#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int l=1;l<=n;l++){
    	for(int s=1;s<=n-l;s++){
    		cout<<" ";
		}
		if(l==1||l==n){
		for(int j=1;j<=n;j++){
			cout<<"*";
		}
	}
		else{
		for(int j=1;j<=n;j++){
			if(j==1||j==n){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}	
		}
		cout<<endl;	
	}

		return 0;
	}


