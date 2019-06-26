//Phone KeyPad
#include<bits/stdc++.h>
using namespace std;
int ct=0;
char keys[10][10]={" ","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
void printall(char* in,int i,char *out,int j){
	//base
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<" ";
		ct++;
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
	cout<<endl<<ct;
	return 0;
}
