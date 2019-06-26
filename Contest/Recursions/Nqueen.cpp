#include<iostream>
using namespace std;
int ct=0;
bool isSafe(int board[][10],int i,int j,int n){
	
	//Horizontal and Vertical
	for(int k=0;k<n;k++){
		if(board[i][k]||board[k][j]){
			return false;
		}
	}

	// Left Diagnol
	int r=i;
	int c=j;
	while(r>=0 && c>=0){
		if(board[r][c]){
			return false;
		}
		r--;
		c--;
	}
//right diagonal 
	r=i;
	c=j;

	while(r>=0 && c<n){
		if(board[r][c]){
			return false;
		}
		r--;
		c++;
	}

	return true;
}

bool NQueen(int board[][10],int i,int n){
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				if(board[k][l]==1){
					cout<<"{"<<k+1<<"-"<<l+1<<"} ";
				}
			}
		}
		ct++;
		cout<<" ";
		return false;
	}
	for(int j=0;j<n;j++){
		if(isSafe(board,i,j,n)){
			board[i][j]=1;
			bool KyaBaakiPlaced= NQueen(board,i+1,n);
			if(KyaBaakiPlaced){
				return true;
			}
			board[i][j]=0;
		}
	}
	return false;
}
int main(){
	int board[10][10]={0};
	int n;
	cin>>n;

	NQueen(board,0,n);
	cout<<endl<<ct;
	return 0;
}
