#include<iostream>
using namespace std;
int main() {
    int dec;
    int oct=0;
    int i=1;
    int rem=0;
    cin>>dec;
    while(dec!=0){
        rem=dec%8;
        oct=oct+rem*i;
        dec=dec/8;
        i=i*10;
    }
    cout<<oct;
	return 0;
}
