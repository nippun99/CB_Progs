#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char a[1000];
    cin.getline(a,1000);
    int n=strlen(a);
    for(int i=0;i<n;i++){
        if(i%2==0){
            a[i]=a[i]-1;
        }
        else{
            a[i]=a[i]+1;
        }
    }
    
    cout<<a;
    
	return 0;
}
