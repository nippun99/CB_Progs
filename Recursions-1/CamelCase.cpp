#include<iostream>
using namespace std;
int main(){
	char a[1000];
	cin.getline(a,1000);
	cout<<a[0];
	for(int i=1;a[i]!='\0';i++){
		if(a[i]>='A' && a[i]<='Z'){
			cout<<'\n';
		}
		cout<<a[i];
	}
	return 0;
}
