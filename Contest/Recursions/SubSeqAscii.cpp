// Subsequences
#include <bits/stdc++.h>
using namespace std;
void Subsequences(char *in,int i,char *out,int j){
	// Base case
	if(in[i]=='\0'){
		 out[j]='\0';
		 cout<<out<<" ";
		 return;
	}
	// Recursive case
	// Ek baari ith index wale element ko ignore krdo
	Subsequences(in,i+1,out,j);

	// Ek baari ith ko consider krlo
	out[j]=in[i];
	Subsequences(in,i+1,out,j+1);
	string str=to_string((int)in[i]);
	int k=str.length();
	for(int l=0;l<k;l++){
		out[j++]=str.at(l);
	}
	Subsequences(in,i+1,out,j);

}

int main(){
	char in[100];
	cin.getline(in,100);	
	char out[100];

	Subsequences(in,0,out,0);
	cout<<endl<<pow(3,strlen(in));

	return 0; 
}
