#include <bits/stdc++.h> 
using namespace std; 
int main(){
	int n;
	int a[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum;
	cin>>sum;
	sort(a,a+n);
	 for (int i = 0; i < n - 2; i++) { 
        for (int j = i + 1; j < n - 1; j++) { 
            for (int k = j + 1; k < n; k++) { 
                if (a[i] + a[j] + a[k] == sum) { 
                    cout << a[i] << ", "
                         << a[j] << " and "
                         << a[k] << endl; 
                } 
            } 
        } 
    } 
	
}
