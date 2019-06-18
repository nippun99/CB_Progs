#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int l=1;l<=n;l++){
    	int p=1;
		for(int i=1;i<=l;i++){
				cout<<p<<'\t';
				p=p*(l-i)/i;
			
		}
		cout<<endl;
	}
	return 0;
}
