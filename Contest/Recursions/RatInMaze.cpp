#include<bits/stdc++.h>
using namespace std;
bool RatInMaze(char maze[10][10],int sol[10][10],int i,int j,int n,int m){
	if(i==n-1 && j==m-1){
		sol[i][j]=1;
		for(int k=0;k<n;k++){
			for(int l=0;l<m;l++){
					cout<<sol[k][l]<<" ";
				}
			cout<<endl;
		}
		return true;
	}
	//Right
	sol[i][j]=1;
	if(maze[i][j+1] !='X' && j+1<m){
		bool KyaRightSeMila=RatInMaze(maze,sol,i,j+1,n,m);
		if(KyaRightSeMila){
			return true;
		}
	}
	//NeecheSeMila
	if(maze[i+1][j]!='X' && i+1<n){
		bool KyaNeecheSeMila=RatInMaze(maze,sol,i+1,j,n,m);
		if(KyaNeecheSeMila){
			return true;
		}
	}
	sol[i][j]=0;
	return false;
		
}

int main() {
	int n,m;
	cin>>n>>m;
	cin.ignore();
	char maze[10][10];
	for(int k=0;k<n;k++){
		cin.getline(maze[k],1000);
	}
	int sol[10][10]={0};
	if(RatInMaze(maze,sol,0,0,n,m)==false){
	 cout<<"-1";   
	}
	return 0;
}

