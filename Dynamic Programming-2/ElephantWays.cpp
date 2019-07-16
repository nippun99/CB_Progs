#include<bits/stdc++.h>
using namespace std;

int ways(int i,int j){
	if(i==0 && j==0){
		return 1;
	}
	
	int ans=0;
	for(int k=0;k<i;k++){
		ans+=ways(k,j);
	}
	for(int k=0;k<j;k++){
		ans+=ways(i,k);
	}
	return ans;
}

int bu(int i,int j){
	int* dp=new int[i+1][j+1];
	
	
}

int main() {
	int rows,cols;
	cin>>rows>>cols;
	cout<<ways(rows,cols);
	
	return 0;
}

