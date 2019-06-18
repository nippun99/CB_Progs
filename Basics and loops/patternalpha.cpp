#include<bits/stdc++.h>
using namespace std;
int main(){
int n,line,i,d;
cin>>n;
for(line=1;line<=n;line++){
	char ch='A';
	for(i=1;i<=n-line+1;i++){
		cout<<ch;
		ch=ch+1;
	}
	ch=ch-1;
	for(d=1;d<=n-line+1;d++){
		cout<<ch;
		ch=ch-1;
	
	}
	cout<<endl;
}
return 0;
}
