#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	//up
	int u=(n/2)+1;
	for(int l=1;l<=u;l++){
		for(int s=1;s<=u-l;s++){
			cout<<"  ";
		}
		for(int j=1;j<=2*l-1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	//down
	int d=(n/2);
	for(int l=1;l<=d;l++){
		for(int s=1;s<=l;s++){
			cout<<"  ";
		}
		for(int j=1;j<=2*(d-l)+1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
