#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

int i, j = 0, counter[n] = {0};	
	for(i=0; i<n; i++)
		counter[a[i]]++;
 
	i=0;
	while(i < n)
	{
		flag:
		a[j] =i;
		j++;
		counter[i]--;
		if(counter[i] > 0)
		i++;
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
