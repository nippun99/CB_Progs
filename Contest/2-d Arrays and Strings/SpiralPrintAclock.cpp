// RatInMaze
#include <iostream>
using namespace std;

void SpiralAclock(int a[11][11],int m,int n){
	int sr=0;
	int er=m-1;
	int sc=0;
	int ec=n-1;
	while(sr<=er && sc<=ec){
		for(int i=sr;i<=er;i++){
			cout<<a[i][sc]<<", ";
		}
		sc++;
		for(int i=sc;i<=ec;i++){
			cout<<a[er][i]<<", ";
		}
			er--;
		if(sc<=ec){
			for(int i=er;i>=sr;i--){
				cout<<a[i][ec]<<", ";
			}
			ec--;
		}
		if(sr<=er){
			for(int i=ec;i>=sc;i--){
				cout<<a[sr][i]<<", ";
			}
			sr++;
		}
	}
	cout<<"END";
	
}


int main(){
	int m,n;
	cin>>m>>n;
	int a[11][11];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}	
	}	
	
	SpiralAclock(a,m,n);
	return 0;
}
