#include<iostream>
using namespace std;
int main(){
	int row,col;
	int num=0;
	int a[20][20];
	cin>>row>>col;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<row;i++){
			
			
		if(i%2==0){
			for(int j=0;j<col;j++){
				cout<<a[i][j]<<", ";
			}
		}
		else{
			for(int j=col-1;j>=0;j--){
				cout<<a[i][j]<<", ";
			}
		}
	}
	cout<<"END";
	
	
}
