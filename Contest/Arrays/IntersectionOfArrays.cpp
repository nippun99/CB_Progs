#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000];
	int b[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	
	int list[1000];
	int i=0;
	int j=0;
	int itr=0;
	while(i<n && j<n){
		if(a[i]==b[j]){
			list[itr]=a[i];
			itr++;
			i++;
			j++;
		}
		else if(a[i]<b[j]){
			i++;
		}
		else{
			j++;
		}
	}
	cout<<"[";
	for(int k=0;k<itr;k++){
		if(k>=1){
			cout<<", ";
		}
		cout<<list[k];
	}
	cout<<"]";
	return 0;
}
