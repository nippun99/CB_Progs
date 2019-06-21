#include <iostream>
using namespace std;

void per(char *in,int i){
	if(in[i]=='\0'){
		cout<<in<<endl;
		return;
	}
	for(int j=i;in[j]!='\0';j++){
		swap(in[j],in[i]);
		per(in,i+1);
		swap(in[j],in[i]);
	}
}

int main(){
	char in[100]="abc";
	per(in,0);

	return 0; 
}
