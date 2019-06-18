#include<iostream>
using namespace std;
int main(){
	int n,c,N;

	int a[100];
	cin>>N;
	for(int i=0;i<N;i++){
	cin>>n;
	int count=0;
	while(n!=0){
		c=n&1;
		if(c==1)
		{count++;}
		n=n>>1;
	}
	a[i]=count;
	}
	for(int i=0;i<N;i++){
		cout<<a[i]<<endl;
	}
return 0;
}
