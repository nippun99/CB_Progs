//Spiral Print
#include<iostream>
using namespace std;

void spiral(int a[][20],int r,int c){
	int sr=0;
	int er=r-1;
	int sc=0;
	int ec=c-1;
	//print sr
	
	while(sc<=ec && sr<=er){
		for(int p=sc;p<=ec;p++){
			cout<<a[sr][p]<<" ";
		}
		sr++;
		for(int p=sr;p<=er;p++){
			cout<<a[p][ec]<<" ";
		}
		ec--;
		for(int p=ec;p>=sc;p--){
			cout<<a[er][p]<<" ";
		}		
		er--;
		for(int p=er;p>=sr;p--){
			cout<<a[p][sc]<<" ";
		}
		sc++;
}
	
	
}


int main(){
	int row,col;
	int num=0;
	int a[20][20];
	cin>>row>>col;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
				num++;
			a[i][j]=num;
		}
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	
	
	spiral(a,row,col);
	

}
