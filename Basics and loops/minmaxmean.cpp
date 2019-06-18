#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,num;
	int sum=0;
	int max=INT_MIN;
	int min=INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		sum=sum+num;
		if(num>max)
		max=num;
		if(num<min)
		min=num;
	}
	float avg=(float) sum/n;
	cout<<avg<<'\n';
	cout<<max<<'\n';
	cout<<min<<'\n';
return 0;
}
