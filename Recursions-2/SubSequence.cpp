// Subsequences
#include<bits/stdc++.h>
using namespace std;
string s[100];
int ct=0;
void Subsequences(char *in,int i,char *out,int j){
	// Base case
	if(in[i]=='\0'){
		 out[j]='\0';
		 s[ct++]=out;
		 return;
	}
	// Recursive case
	// Ek baari ith index wale element ko ignore krdo
	Subsequences(in,i+1,out,j);

	// Ek baari ith ko consider krlo
	out[j]=in[i];
	Subsequences(in,i+1,out,j+1);

}

int main(){
	int n;
	cin>>n;
	char in[100][100];
	cin.ignore();
	for(int k=0;k<n;k++){
		cin.getline(in[k],100);	
	}
	for(int k=0;k<n;k++){
		char out[100];
		
		Subsequences(in[k],0,out,0);
		sort(s,s+ct);
		for(int i=0;i<ct;i++){
       cout<<s[i]<<endl;}
       ct=0;
    }
			
	
	return 0; 
}
