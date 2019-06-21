#include <iostream>
#include<cstring>
using namespace std;
int f(char *a,int n){
	if(n==0){
		return 0;
	}
	//Recursive case
	int ld=a[n-1]-'0';
	return f(a,n-1)*10 + ld;
}

int main(){
	char a[100];
	cin.getline(a,100);
	int n=strlen(a);
	cout<<f(a,n);
	return 0; 
}
