#include<iostream>
using namespace std;
int main() {
    int N,n,i;
    int f=0;
    cin>>N;
for(n=2;n<=N;n++){    
    for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }  
    }
    if(i==n){
    	if(f==0){
    		cout<<n;
    		f++;
		}
        else
        {
        	cout<<","<<" "<<n;
		}
    }

}
	return 0;
}
