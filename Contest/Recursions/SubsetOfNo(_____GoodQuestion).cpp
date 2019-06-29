//Very Good Question
//Find all the subsets of a given array that sum to k.
//
//
//Input Format:
//The first line contains an integer N , the size of the array. The next line conatins N integers. The next line contains an integer K.
//
//Constraints:
//0 < N <= 20
//
//Output Format:
//Output all the subsets that sum to K. The output should be printed as follows :
//
//Sets with least no of elements should be printed first.
//For equal length, elements that appear later in the original set,should be printed first.
//Sample Input:
//5
//1 4 6 5 3
//10
//Sample Output:
//6 4
//3 6 1
//5 4 1
//Explanation:
//4 + 6 = 10
//1 + 4 + 5 = 10
//1 + 3 + 6 = 10
#include<bits/stdc++.h>
using namespace std;
int ans[100][100];
int ct=0;
int itr[100];
void findsum(int a[],int n, int k,int op[],int i, int j){
	if(n==i){
		int sum=0;
		for(int l=0;l<j;l++){
			sum+=op[l];	
		}
		if(sum==k){
			int l;
			for(l=0;l<j;l++){
				ans[ct][l]=op[l];
			}
			itr[ct]=l;
			ct++;	
		}
		return;
	}
	//Recursive 
	findsum(a,n,k,op,i+1,j);
	op[j++]=a[i];
	findsum(a,n,k,op,i+1,j);
	
}
int main() {
	int n,k,a[100],op[100];
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	findsum(a,n,k,op,0,0);
//	cout<<ct<<endl;
	
	for(int i=0;i<ct;i++){
		for(int j=itr[i]-1;j>=0;j--){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

