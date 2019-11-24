#include<bits/stdc++.h>
using namespace std;
int topdown(int n,int* dp){
	if(n==0||n==1){
		dp[n]=n;
		return n;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	
	int ans=topdown(n-1,dp) + topdown(n-2,dp);
	dp[n]=ans;
	return dp[n];
}

int BottomUp(int n){
	int *dp = new int[n+1];
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	int ans=dp[n];
	delete []dp;
	return dp[n];	
}

int main() {
	int dp[10000];
	for(int i=0;i<10000;i++){
		dp[i]=-1;
	}
	cout<<BottomUp(5);
	return 0;
}

