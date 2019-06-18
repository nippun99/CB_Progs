#include<iostream>
using namespace std;
int main(){
	int a[10]={1,2,4,6,7,9};
	int b[4]={0,3,5,8};
	
	int m=sizeof(a)/sizeof(int);
	int n=sizeof(b)/sizeof(int);
	m=m-n;
	int k=m+n-1;
	int i=m-1;
	int j=n-1;
	cout<<i<<endl<<j<<endl<<k<<endl;
	
	while(i>=0&&j>=0){
		if(a[i]>b[j]){
			a[k]=a[i];
			k--;
			i--;
		}
		else{
			a[k]=b[j];
			k--;
			j--;
		}
	}
	while(j>=0){
		a[k]=b[j];
		k--;
		j--;
	}
	while(i>=0){
		a[k]=a[i];
		k--;
		i--;
	}

	
	
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
return 0;
}
