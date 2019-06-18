#include<iostream>
using namespace std;

void len(char *a){
	int i=0;
	while(a[i]!='\0'){
		i++;
	}
	cout<<i;
}

int main(){
	char a[100];
	cin.getline(a,100);
	cout<<a<<endl;
	len(a);
}
