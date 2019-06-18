#include<iostream>
using namespace std;

void CheckPermutation(char *a,char* b){
	int freqa[26]={0};
	for(int i=0;a[i]!='\0';i++){
		int index=a[i]-'a';
		freqa[index]++;
	}
	
	int freqb[26]={0};
	for(int i=0;b[i]!='\0';i++){
		int index=b[i]-'a';
		freqb[index]++;
	}
	int j;
	for(j=0;j<26;j++){
		if(freqa[j]!=freqb[j]){
			cout<<"Not Permutation"<<endl;
			break;
		}
	}
	if(j==26){
		cout<<"Permutation";
	}
	
}

int main(){
	char a[100];
	cin.getline(a,100);
	char b[100];
	cin.getline(b,100);
	CheckPermutation(a,b);
	
}
