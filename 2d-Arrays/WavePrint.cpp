#include<iostream>
using namespace std;
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
	
		for(int i=0;i<col;i++){
			
			
		if(i%2==0){
		for(int j=0;j<row;j++){
			cout<<a[j][i]<<" ";
		}
		cout<<'\t';
		}
		else{
		for(int j=row-1;j>=0;j--){
			cout<<a[j][i]<<" ";
		}
		cout<<'\t';	
		}
	}
	
	
	
}
