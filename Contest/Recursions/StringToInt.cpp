#include<iostream>
using namespace std;
void stoint(char *a){
	if(a[0]=='\0'){
		return;
	}
	int p=a[0]-'0';
	cout<<p;
	stoint(a+1);
}

int main() {
	char a[100];
	cin.getline(a,100);
	stoint(a);
	return 0;
}
