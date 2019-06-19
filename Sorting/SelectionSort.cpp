#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	for(int i=0;i<=n-2;i++){
		int min=i;
		for(int j=i+1;j<=n-1;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
return 0;
}
