#include <iostream>
using namespace std;
int BinarySearch(int *a,int s,int e,int key){
	if(s>e){
		return -1;
	}
	//Recursive
	int mid=(s+e)/2;
	if(a[mid]==key){
		return mid;
	}
	else if(key<a[mid]){
		e=mid-1;
	}
	else{
		s=mid+1;
	}
	int ans = BinarySearch(a,s,e,key);
	return ans;
	
}


int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(a)/sizeof(int);
	int key;
	cin>>key;
	
	int ans=BinarySearch(a,0,n-1,key);
	cout<<ans;

	return 0; 
}
