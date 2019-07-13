#include<bits/stdc++.h>
using namespace std;
//use topDown in this
int Nstairs(int n,int k){
	//Base
	if(n==0){
		return 1;
	}
	
	if(n<0){
		return 0;
	}
	//Recursive Case
	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=Nstairs(n-i,k);
	}
	return ans;	
}

//Bottomup
int BottomUp(int n,int k){
	int* dp=new int[n+1];
	dp[0]=1;
	int ans=0;
	for(int i=1;i<=n;i++){
		ans=0;
		for(int j=1;j<=k;j++){
			if(i-j>=0){
				ans+=dp[i-j];
			}
		}
		dp[i]=ans;
	}
	return dp[n];
}
int stair(int n,int k){
	int *dp=new int[n+1];
	dp[0]=dp[1]=1;
	for(int i=2;i<=n;i++){
		if(i-k-1>=0){
			dp[i]=2*dp[i-1]-dp[i-k-1];
		}
		else{
			dp[i]=2*dp[i-1];
		}
	}
	return dp[n];
}

int main() {
	int n,k=3;
	cin>>n;
	
	cout<<Nstairs(n,k)<<endl;
	cout<<BottomUp(n,k)<<endl;
	cout<<stair(n,k)<<endl;
	return 0;
}

