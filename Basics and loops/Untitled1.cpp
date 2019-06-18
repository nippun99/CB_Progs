#include<bits/stdc++.h>
using namespace std;
int main(){
int n,num=0;
cin>>n;
for(int i=0;n!=0;i++){
	num=num*10+n%10;
	n=n/10;
}
cout<<num;
return 0;
}
