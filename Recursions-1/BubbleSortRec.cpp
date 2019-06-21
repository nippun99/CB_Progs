//BubbleSort
#include<iostream>
using namespace std;
void BubbleSort(int* a,int n,int i){
	if(i==n-1){
		return;
	}
	for(int j=0;j<=n-i-2;j++){
		if(a[j]>a[j+1]){
//			int temp=a[j];
//			a[j]=a[j+1];
//			a[j+1]=temp;
			swap(a[j],a[j+1]);
		}
	}
	BubbleSort(a,n,i+1);
}

int main(){
	int a[]={8,9,7,6,4,5,1};
	int n =sizeof(a)/sizeof(int);
	BubbleSort(a,n,0);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
