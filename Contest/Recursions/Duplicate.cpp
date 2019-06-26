#include<bits/stdc++.h>
using namespace std;
void pt(char *a){
	if(a[0]=='\0'){
		return;
	}
	//recursive

	cout<<a[0];
	if(a[0]==a[1]){
		cout<<"*";
	}
	pt(a+1);
	
}

int main() {
	char a[100];
	cin.getline(a,100);
	pt(a);
	return 0;
}

