#include<iostream>
using namespace std;
bool RatInMaze(char maze[][5],int sol[][10],int i,int j,int n,int m){
	//base
	if(i==n-1 && j==m-1){
		sol[i][j]=1;
		for(int k=0;k<n;k++){
			for(int l=0;l<m;l++){
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}
	sol[i][j]=1;
	if(j+1<m && maze[i][j+1]!='X'){
		bool Rsemila=RatInMaze(maze,sol,i,j+1,n,m);
		if(Rsemila){
			return true;
		}
	}
	
	if(i+1<n && maze[i+1][j]!='X'){
		bool Lsemila=RatInMaze(maze,sol,i+1,j,n,m);
		if(Lsemila){
			return true;
		}
	}
	sol[i][j]=0;
	return false;
	
	
}



int main(){
	char maze[5][5]={
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
	int sol[10][10]={0};
	RatInMaze(maze,sol,0,0,4,4);
	return 0;
}
