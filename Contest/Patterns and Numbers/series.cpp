#include<iostream>
using namespace std;
int main() {
    int count=0;
    int i=1;
    int n1,n2;
    cin>>n1>>n2;
    while(count<n1){
        int num=3*i+2;
        if(num%n2==0){
            i++;
        }
        else{
            cout<<num<<endl;
            i++;
            count++;
        }
        
    }
	return 0;
}
