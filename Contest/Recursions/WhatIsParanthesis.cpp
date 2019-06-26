#include<bits/stdc++.h>
using namespace std;
void para(char *a){
	if(a[0]==')'){
		return;
	}
	
	cout<<a[0];
	para(a+1);
}

int main() {
	char a[100];
	cin.getline(a,100);
	int i;
	for( i=0;a[i]!='(';i++){
		
	}
	para(a+i+1);
	
	return 0;
}

