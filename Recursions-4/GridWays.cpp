#include<iostream>
using namespace std;
int Ways(int i,int j){
	if(i==0 && j==0){
		return 1;
	}
	if(i<0 || j<0){
		return 0;
	}
	//Recursive Case
	return Ways(i-1,j)+Ways(i,j-1);
	
}

int main(){
	int m,n;
	cin>>n>>m;
	cout<<Ways(n,m)<<endl;
	
	return 0;
}
