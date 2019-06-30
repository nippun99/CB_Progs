#include<bits/stdc++.h>
using namespace std;
int main() {
	char a[100000];
	vector<int> weights;
	cin>>a;
	int cw=a[0]-'a'+1;
	int n=strlen(a);
	weights.push_back(cw);
	for(int i=1;i<n;i++){
		if(a[i-1]==a[i]){
			cw=cw+a[i]-'a'+1;
		}
		else{
			cw=a[i]-'a'+1;
		}
		weights.push_back(cw);
	}
	int q;
	cin>>q;
	string ans[100000];
	for(int k=0;k<q;k++){
		int key;
		cin>>key;
		
		

		if(find(weights.begin(),weights.end(),key)!=weights.end()){
			ans[k]="Yes";
		}
		else{
			ans[k]="No";
		}
	}
	
	for(int k=0;k<q;k++){
		cout<<ans[k]<<endl;
	}
	
	
	return 0;
}

