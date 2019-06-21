#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100];
	cin.getline(a,100);
	int freq[26]={0};
	for(int i=0;a[i]!='\0';i++){
		int index=a[i]-'a';
		freq[index]++;
	}
	int max=INT_MIN;
	int maxind=-1;
	for(int i=0;i<26;i++){
		if(freq[i]>max){
			max=freq[i];
			maxind=i;
		}
	}
	cout<<a[maxind];
	
	return 0;
}
