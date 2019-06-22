#include<iostream>
#include<cmath>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    int d=n;
    int i=0;
    long long int newnum=0;
    while(n!=0){
        
        int rem=n%10;
        if(rem>4 && rem<9){
            rem=9-rem;
        }
        else if(rem==9 && n/10!=0){
        	rem=9-rem;
		}
        
        newnum+=rem*pow(10,i++);
        n=n/10;
    }    
    cout<<newnum;

	return 0;
}
