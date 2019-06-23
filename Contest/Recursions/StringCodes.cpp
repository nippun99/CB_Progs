#include<iostream>
using namespace std;
char keys[28]={" abcdefghijklmnopqrstuvwxyz"};
bool x=0;
void combi(char *a,char *op,int i,int j){
	if(a[i]=='\0'){
		op[j]='\0';
		if(x){	
		cout<<", "<<op;
		}
		else
		{
			cout<<op;
			x=1;
		}
		
		return;
	}
	int index=a[i]-'0';
	op[j]=keys[index];
	combi(a,op,i+1,j+1);
	int index2=(a[i]-'0')*10+(a[i+1]-'0');
	if((a[i+1]!='\0') && index2<=26){
		op[j]=keys[index2];
		combi(a,op,i+2,j+1);	
	}
	
}



int main(){
	char a[100];
	cin.getline(a,100);
	char op[100];
	cout<<"[";
	combi(a,op,0,0);
	cout<<"]";
return 0;
}
