#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int l=1;l<=n;l++){
    	for(int s=1;s<=n-l;s++){
    		cout<<" "<<'\t';
		}
		int count=l;
		for(int i=1;i<=l;i++){
			cout<<count++<<'\t';
		}
		count--;
		for(int d=1;d<l;d++){
			cout<<--count<<'\t';
		}
		cout<<endl;
	}
	return 0;
}
