#include<bits/stdc++.h>
using namespace std;

int main() {
	char a[100000];
	cin>>a;
	int freq[26]={0};
	int n=strlen(a);
	for(int i=0;i<n;i++){
		int index=a[i]-'a';
		freq[index]++;
	}
	int oddcount=0;
	for(int i=0;i<26;i++){
		if(freq[i]%2 !=0){
			oddcount++;
		}
	}
	if(n%2 !=0){
		if(oddcount==1){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	else{
		if(oddcount==0){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	
	return 0;
}

