#include<bits/stdc++.h>
using namespace std;

int main(){
int f,i,s,j;
int c;
cin>>i;
cin>>f;
cin>>s;
j=i;
while(j<=f){
	c=(5.0/9.0)*(j-32);
	cout<<j<<' '<<c<<'\n';
	j=j+s;
}
return 0;
}
