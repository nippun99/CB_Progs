//Armstrong Number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	int an=0;
	bool out;
	cin>>n;
	int n1=n;
	int len=log10(n)+1;
	for(int i=1;i<=len;i++){
		int d=n%10;
		an=an+pow(d,len);
		n=n/10;
	}
	if(an==n1){
	    out=true;

	}
	else{
	    out=false;
	}
			cout<<out;
	return 0;
}
