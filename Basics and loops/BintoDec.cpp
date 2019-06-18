#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int N;
    cin>>N;
    int p=0;
    int d=0;
    while(N!=0){
        d=d+(N%10)*pow(2,p);
        p++;
        N=N/10;
    }
    cout<<d;
	return 0;
}
