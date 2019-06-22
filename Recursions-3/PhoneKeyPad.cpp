//Phone KeyPad
#include<bits/stdc++.h>
using namespace std;

char keys[10][10]={" "," ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void printall(char* in,int i,char *out,int j){
	//base
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	
	//Recursive case
	int digit= in[i]-'0';
	for(int k=0;keys[digit][k]!='\0';k++){
		out[j]= keys[digit][k];
		printall(in,i+1,out,j+1);
	}
	
}

int main(){
	char a[100];
	cin.getline(a,100);
	char op[100];
	printall(a,0,op,0);
	return 0;
}
