#include <bits/stdc++.h> 
using namespace std; 
int main(){
	char a[1000];
	cin.getline(a,1000);
	int n=strlen(a);
	int freq[100]={0};
	int in=0;
	for(int i=0;i<n-1;i++){
		freq[in]++;
		if(a[i]!=a[i+1]){
			in++;
		}
	}
	freq[in]++;
	int j=0;
	for(int i=0;i<n;i++){
		if(freq[i]>1)
			cout<<a[j]<<freq[i];
		else if (freq[i]==1)
			cout<<a[j];
			
		j=j+freq[i];
	}
	
return 0;	
}
