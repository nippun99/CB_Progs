#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
	string x=to_string(a);
	string y=to_string(b);
	if(x.append(y)>y.append(x)){
		return false;
	}
	else{
		return true;
	}
}

int main(){
	int N;
	cin>>N;
	int ans[100][100];
	int ele[100];
	for(int b=0;b<N;b++){
	
	
	int n;
	cin>>n;
	ele[b]=n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-i-2;j++){
			if(comp(a[j],a[j+1])){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		ans[b][i]=a[i];
	}
}

for(int i=0;i<N;i++){
	for(int j=0;j<ele[i];j++){
		cout<<ans[i][j];
	}
	cout<<endl;
}





return 0;
}
