#include<iostream>
using namespace std;
int main(){
    int n,m;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int i;
    for(i=0;i<n;i++){
        if(a[i]==m){
            cout<<i;
            break;
        }
    }
    if(i==n){
        cout<<"-1";
    }
    
    
	return 0;
}
