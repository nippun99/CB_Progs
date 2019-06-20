#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a[1000];
	int n;
	cin>>n;
	int numa=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		numa+=a[i]*pow(10,(n-i-1));
	}
	int b[1000];
	int m;
	cin>>m;
	int numb=0;
	for(int i=0;i<m;i++){
		cin>>b[i];
		numb+=b[i]*pow(10,(m-i-1));
	}
	int sum=numa+numb;
	int res[1000];
	int i=0;
	while(sum!=0){
		int rem=sum%10;
		res[i]=rem;
		sum=sum/10;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<res[j]<<", ";
	}
	cout<<"END";
	
	
}

