//SubSequences
#include <iostream>
using namespace std;
void SubSeq(char *in,int i,char *out,int j){
	//Base Case
	if(in[j]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	//Recursive Case
	//Ek baar ith ko chordo
	SubSeq(in,i+1,out,j);
	out[j]=in[i];
	SubSeq(in,i+1,out,j+1);
	
} 
int main(){
	char in[]="ABC";
//	cin.getline(in,100);
	char out[100];
	SubSeq(in,0,out,0);
	
	return 0; 
}
