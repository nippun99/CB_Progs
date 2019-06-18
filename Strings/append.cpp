#include<iostream>
using namespace std;
int len(char *a){
	int i=0;
	while(a[i]!='\0'){
		i++;
	}
	return i;
}

void ap(char *a,char *b){
 int i=	len(a);
 int j;
 for(j=0;j<len(b);j++){
	a[i+j]=b[j];
 }
 a[i+j]='\0';
 cout<<a;
}

int main(){
	char a[100];
	char b[100];
	cin.getline(a,100);
	cin.getline(b,100); 
	ap(a,b);
}
