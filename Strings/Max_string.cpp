#include<iostream>
using namespace std;

int len(char *a){
	int i=0;
	while(a[i]!='\0'){
		i++;
	}
	return i;
}

void Copy(char *a,char *b){
	for(int i=0;i<=len(b);i++){
		 a[i]=b[i];
	}
}

int main(){
	int n;
	char max_string[100];
	int max_size=0;
	cin>>n;
	cin.ignore();
	char in[100];
for(int i=0;i<n;i++){
	cin.getline(in,100);
	int l=len(in);
	if(l>max_size){
		Copy(max_string,in);
		max_size=l;
	}
}

cout<<max_string;	
}
