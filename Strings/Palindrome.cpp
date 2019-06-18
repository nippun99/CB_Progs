#include<iostream>
using namespace std;

int len(char *a){
	int i=0;
	while(a[i]!='\0'){
		i++;
	}
	return i;
}

void CheckPalindrome(char* a){
	int i=0;
	int j=len(a)-1;
	while(i<j){
		if(a[i]!=a[j]){
			cout<<"false"<<endl;
			break;
		}
		i++;
		j--;
	}
	if(i>j){
		cout<<"true"<<endl;
	}
	
}

int main(){
	char a[100];
	cin.getline(a,100);	
	CheckPalindrome(a);
}


