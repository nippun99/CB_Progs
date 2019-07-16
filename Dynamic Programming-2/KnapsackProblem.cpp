//Knapsack Problem
#include<bits/stdc++.h>
using namespace std;

int Knapsack(int* price,int* wt, int n,int capacity,int dp[][100]){
	//Base
	if(capacity==0 || n==0){
		dp[n][capacity]=0;
		return 0;
	}
	if(dp[n][capacity]!=-1){
		return dp[n][capacity];
	}
	
	//Recursive
	int inc,exc;
	if(wt[n-1]<=capacity){
		inc= price[n-1]+Knapsack(price,wt,n-1,capacity-wt[n-1],dp);
	}
	exc=Knapsack(price,wt,n-1,capacity,dp);
	
	dp[n][capacity]=max(inc,exc);
	return dp[n][capacity];	
	
}
int BottomUp(){
 // pull	
}


int main() {
	int price[]={2,12,12,21};
	int wt[]={4,5,6,7};
	int dp[10][100];
	for(int i=0;i<10;i++){
		for(int j=0;j<100;j++){
			dp[i][j]=-1;
		}
	}
	cout<<Knapsack(price,wt,4,11,dp);
	return 0;
}

