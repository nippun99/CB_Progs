//Sudoku Solver
#include<iostream>
#include<cmath>
using namespace std;
bool isSafe(int mat[][9],int i,int j, int n,int num){
	for(int k=0;k<n;k++){
		if(mat[i][k]==num || mat[k][j]==num){
			return false;
		}
	}
	n=sqrt(n);
	int starti=(i/n)*n;
	int startj=(j/n)*n;
	for(int k=starti;k<starti+n;k++){
		for(int l=startj;l<startj+n;l++){
			if(mat[k][l]==num){
				return false;
			}
		}
	}
}

bool SudokuSolver(int mat[][9],int i,int j,int n){
	// Base case
	if(i==n){
		// Print the sudoku
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<mat[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}

	if(j==n){
		return SudokuSolver(mat,i+1,0,n);
	}

	if(mat[i][j]!=0){
		return SudokuSolver(mat,i,j+1,n);
	}

	// Recursive case
	for(int num = 1;num<=n;num++){
		if(isSafe(mat,i,j,n,num)){
			mat[i][j] = num;
			bool KyaBaakiSolveHua = SudokuSolver(mat,i,j+1,n);
			if(KyaBaakiSolveHua){
				return true;
			}
			mat[i][j] = 0;
		}
	}
	return false;
}

int main(){
	int mat[9][9] =
        {{5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}};
    
    SudokuSolver(mat,0,0,9);
        
}
