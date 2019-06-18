#include<iostream>
using namespace std;
int rev(int n){
	int r=0;
	while(n!=0){
		r=r*10 +n%10;	
		n=n/10;
	}
	return r;
}
int main(){
	int t;
	cin>>t;
	int disp=t;
	int ar[100];
	int count=0;
	while(t--){
		int a,b;
		cin>>a>>b;
		int sum=rev(a)+rev(b);
		sum=rev(sum);
		ar[count]= sum;
		count++	;
	}
	
	for(int i=0;i<disp;i++){
		cout<<ar[i]<<endl;
	}
	return 0;
}
