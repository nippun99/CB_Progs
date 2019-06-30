#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	reverse(a,a+n);
    int sol[100]={0};
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]-a[j]<=1){
                   sol[i]++;
            }
        }
	}	
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(sol[i]>max){
			max=sol[i];
		}
	}
	cout<<max;
	return 0;
}
