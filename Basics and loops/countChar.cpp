#include<iostream>
using namespace std;
int main(){
	int count=0;
	int ws=0;
	int alpha=0;
	int digit=0;
	int spe=0;
	char ch;
	ch=cin.get();
	while(ch!='$'){
		if(ch=='\n'||ch=='\t'||ch==' '){
			ws++;
		}
		else if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
			alpha++;
		}
		else if(ch>='0'&&ch<='9'){
			digit++;	
		}
		else{
			spe++;
		}
		ch=cin.get();
		count++;
	}
	cout<<count<<'\n';
	cout<<ws<<'\n'<<alpha<<'\n'<<digit<<'\n'<<spe<<'\n';
	return 0;
}
