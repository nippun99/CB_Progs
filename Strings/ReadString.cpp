#include<iostream>
using namespace std;
void ReadString(char a[]){
	char ch;
	int i=0;
	ch=cin.get();
	while(ch!='\n'){
		a[i]= ch;
		i++;
		ch=cin.get();
	}
	a[i]='\0';
	return;
}


int main(){
	char a[100];
	ReadString(a);
	//cin.getline(a,11);
	cout<<a;
}
