//Spiral Print
#include<iostream>
using namespace std;

void spiral(char a[][20],int n){
	int sr=0;
	int er=n-1;
	int sc=0;
	int ec=n-1;
	//print sr
	char ch='X';
	int count=0;
	while(sc<=ec && sr<=er){
		if(count%2==0){
			ch='O';
		}
		else{
			ch='X';
		}
		for(int p=sc;p<=ec;p++){
			a[sr][p]=ch;
		}
		sr++;
		for(int p=sr;p<=er;p++){
			a[p][ec]=ch;
		}
		ec--;
		for(int p=ec;p>=sc;p--){
			a[er][p]=ch;
		}		
		er--;
		for(int p=er;p>=sr;p--){
			a[p][sc]=ch;
		}
		sc++;
		count++;
}
	
	
}


int main(){
	int n;
	char a[20][20];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]='X';
		}
	}
	

	
	
	spiral(a,n);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	

}
