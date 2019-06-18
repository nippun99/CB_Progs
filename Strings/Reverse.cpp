#include<iostream>
using namespace std;

int length(char *a){
	int i=0;
	for(i=0;a[i]!='\0';i++){
	}
	return i;
}

void rev(char *a){
	int i=0;
	int j=length(a)-1;
	while(i<=j){
		char temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	cout<<a;
}

int main(){
	char a[100];
	cin.getline(a,100);
	rev(a);
}
