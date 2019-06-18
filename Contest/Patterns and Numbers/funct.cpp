#include<iostream>
using namespace std;
int main() {
	int N;
	cin>>N;
	int disp=N;
	int a[100];
	int count=0;	
	while(N--){
	int n;
	cin>>n;
	if(n%2==0)
	{
		a[count]=n/2;
	}
	else
	{
		a[count]= -(n+1)/2;
	}
	count++;
}
for(int i=0;i<disp;i++){
	cout<<a[i]<<endl;
}
	return 0;
}
