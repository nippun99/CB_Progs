//tower of hanoi
#include<bits/stdc++.h>
using namespace std;
void toh(int n,string source,string helper,string destination){
	if(n==0){
		return;
	}
	//Recursive case
	toh(n-1,source,destination,helper);
	cout<<"Move "<<n<<"th "<<"disc from "<<source<<" to "<<destination<<endl;
	toh(n-1,helper,source,destination);
	
	
}

int main() {
	int n;
	cin>>n;
	toh(n,"T1","T3","T2");
	cout<<pow(2,n)-1;
	return 0;
}

