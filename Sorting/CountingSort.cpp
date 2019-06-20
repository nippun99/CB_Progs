#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

int i, j = 0, counter[r] = {0};	
	for(i=0; i<n; i++)
		counter[a[i]-lower]++;
 
	i=0;
	while(i < r)
	{
		flag:
		a[j] = lower+i;
		j++;
		counter[i]--;
		if(counter[i] > 0)
		goto flag;
 
		i++;
	}
}
