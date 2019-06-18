#include<iostream>
using namespace std;
int main(){
	int ip;
	cin>>ip;
	int n=ip/2+1;
	for(int i=1;i<=n;i++)
	{
		for(int s=1;s<=2*(n-i);s++){
			cout<<"  ";
		}
		for(int k=i;k>=1;k--){
			cout<<k<<" ";
		}
		for(int k=1;k<=2*(i-1)-1;k++){
			cout<<"  ";
		}
		if(i!=1){
		
		for(int k=1;k<=i;k++){
			cout<<k<<" ";
		}
		}
		cout<<endl;
	}
	
	int N=ip/2;
	for(int i=1;i<=N;i++){
		for(int s=1;s<=2*i;s++){
			cout<<"  ";
		}
		for(int k=N-i+1;k>=1;k--){
			cout<<k<<" ";
		}
		for(int s=1;s<=2*(N-i)-1;s++){
			cout<<"  ";
		}
		if(i!=N){
		
		for(int g=1;g<=N-i+1;g++){
			cout<<g<<" ";
		}
	}
		cout<<endl;
		
	}
	
return 0;
}
