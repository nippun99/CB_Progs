#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int s=0;
	int e=n-1;
	int key;
	cin>>key;
	while(s<=e){
		int mid= (s+e)/2;
		if(a[mid]==key){
			cout<<mid<<endl;
			break;
		}
		else if(a[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	if(s>e){
		cout<<"Not Found";
	}
}
