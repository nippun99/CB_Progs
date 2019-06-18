#include<iostream>
using namespace std;
int main(){
	char a[][100]={
	"Hello World",
	"Coding Blocks",
	"Coding",
	};
	char key[100];
	cin.getline(key,100);
	int i,j;
	for(int i=0;i<3;i++){
		for(j=0;a[i][j]!='\0';j++){
			if(a[i][j]!=key[j]){
				break;
			}
		}
		if(a[i][j]=='\0' && key[j]=='\0'){
			cout<<"Found";
			break;
		}
	}
	
	if(i==3){
		cout<<"Not Found";
	}
	
	return 0;
}
