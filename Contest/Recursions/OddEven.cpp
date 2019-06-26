#include<bits/stdc++.h>
using namespace std;
void eve(int n){
	if(n<=0){
		return;
	}
	eve(n-2);
	cout<<n<<endl;
}

void odd(int n){
	if(n<=0){
		return;
	}
	cout<<n<<endl;
	odd(n-2);
}

int main() {
	int n;
	cin>>n;
	if(n%2==0){
	
	odd(n-1);
	eve(n);
}
else{
	odd(n);
	eve(n-1);
}
	return 0;
}

