#include<iostream>
#include<climits>
using namespace std;
int main(){
	int a[]={1,2,3,4,5};
	int max=INT_MIN;
	int n;
	for(int i=0;i<5;i++){
		cin>>n;
		a[i]=n;
	}
	for(int j=0;j<5;j++){
		if(a[j]>max){
			max=a[j];
		}
	}
	cout<<max;
}
