#include<iostream>
using namespace std;
void Print(char *a){
	int j=0;
	if(a[j]==')'){
		return;
	}
	cout<<a[j];
	Print(a+1);
}


int main(){
	char a[100];
	cin.getline(a,100);	
	int i;
	for(i=0;a[i]!='(';i++){
		
	}
	Print(a+i+1);
}


