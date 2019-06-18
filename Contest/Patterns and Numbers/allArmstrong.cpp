//Armstrong Number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1>>n2;
	int n;
	for(n=n1;n<=n2;n++)
	{
	int an=0;
	int c=n;
	int len=(int) log10(c)+1;
	while(c!=0){
		int d=c%10;
		an=an+pow(d,len);
		c=c/10;
	}
	if(an==n){
		cout<<an<<endl;
	}
}
	return 0;
}
