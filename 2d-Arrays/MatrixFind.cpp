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
	int f;
	cin>>f;
	int i;
	int j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(a[i][j]==f){
				cout<<f<<"Found at "<<i<<","<<j<<endl;
				break;
			}
		}
	}
	
}
