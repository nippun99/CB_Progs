#include<iostream>
using namespace std;

int length(char *a){
	int i=0;
	for(i=0;a[i]!='\0';i++){
	}
	return i;
}

int rotate(char *a,int n){
	int l=length(a);
	int i=length(a)+n-1;
	int j=length(a)-1;
	for(int k=0;k<l;k++){
		a[i]=a[j];
		i--;
		j--;
	}
	i=l;
	for(int k=0;k<n;k++){
		a[k]=a[i];
		i++;
	}
	a[l]='\0';
	cout<<a;
}


int main(){
	char a[100];
	cin.getline(a,100);
	rotate(a,3);
}
