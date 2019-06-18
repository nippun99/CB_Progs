#include<bits/stdc++.h>
using namespace std;
//square Root
int main(){
	int n,precision=3;
	int current_precision=0;
	cin>>n;
	float inc=1;
	float ans=0;
	while(current_precision<=precision){
	
	while(ans*ans<=n){
		ans=ans+inc;
	}
	ans=ans-inc;
	inc=inc/10;
	current_precision=current_precision+1;
}
cout<<ans<<endl;
return 0;
}
