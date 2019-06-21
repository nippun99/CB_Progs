#include<iostream>
using namespace std;
bool CheckSeven(int *a,int n){
	if(n==0){
		return false;
	}
	if(a[0]==7){
		return true;
	}
	return CheckSeven(a+1,n-1);
}

//First Occurence of Seven
int FirstIndex(int *a,int n,int i){
	if(i==n){
		return -1;
	}
	if(a[i]==7){
		return i;
	}
	FirstIndex(a,n,i+1);
}


int LastIndex(int *a,int n,int i){
	if(i==n){
		return -1;
	}
	if(a[i]==7){
		int puranaIndex=i;
		int AglaIndex=LastIndex(a,n,i+1);
		if(AglaIndex<puranaIndex){
			return puranaIndex;
		}
		else{
			return AglaIndex;
		}
	}
	int indx=LastIndex(a,n,i+1);
	return indx;
}

int main(){
	int a[]={1,2,3,7,4,7,6,7};
	int n=sizeof(a)/sizeof(n);
	cout<<CheckSeven(a,n)<<endl;
	cout<<FirstIndex(a,n,0)<<endl;
	cout<<LastIndex(a,n,0)<<endl;
	
	return 0;
}
