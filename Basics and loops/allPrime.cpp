#include<iostream>
using namespace std;
int main(){
int n,i;
int Num;
cin>>Num;
for(n=2;n<Num;n++){
int p=0;
for(i=2;i<n;i++){
	if(n%i==0){
		break;
	}
}
if(i==n)
cout<<n<<' '<<'\n';
}
return 0;
}
