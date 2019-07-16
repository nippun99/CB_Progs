#include<bits/stdc++.h>
using namespace std;
int lcs(char* a,char* b){
	int dp[100][100]={0};
	int rows=strlen(a);
	int cols=strlen(b);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=cols;j++){
			if(a[i-1]==b[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	for(int i=0;i<=rows;i++){
		for(int j=0;j<=cols;j++){
			cout<<dp[i][j]<<" ";
		}
	    cout<<endl;	
	}
	
	return dp[rows][cols];
	
	
}

int main() {
	char a[100];
	char b[100];
	cin>>a;
	cin>>b;
	cout<<lcs(a,b);
	
	return 0;
}

