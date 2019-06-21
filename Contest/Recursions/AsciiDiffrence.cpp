#include<iostream>
using namespace std;
int main(){
	char a[1000];
	cin.getline(a,1000);
	cout<<a[0];
	for(int i=1;a[i]!='\0';i++){
		signed int ch=a[i]-a[i-1];
		cout<<ch;
		cout<<a[i];
	}
}
