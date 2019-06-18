#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int number=2;
	while(number<=n){
		int i=2;
		while(i<number){
			if(number%i==0){
				break;
			}
			i++;
		}
		//if naturally terminated loop then its prime, because not divided by any number
		if(i==number){
			cout<<number<<endl;
		}
		
		number++;
	}
return 0;
}
