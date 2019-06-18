#include<iostream>
using namespace std;
int main() {
   int oct;
   int rem;
   int num;
   int j=1;
   int obin=0;
   cin>>oct;
	while(oct!=0){
		num=oct%10;
		int i=1;
		int dbin=0;
		while(num!=0){
			rem=num%2;
			dbin+=rem*i;
			i=i*10;
			num=num/2;
		}
		
		obin+=dbin*j;
		j=j*1000;
		oct/=10;
	}
	cout<<obin;
}
