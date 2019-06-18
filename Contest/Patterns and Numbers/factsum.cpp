#include<iostream>
using namespace std;
int main() {
    int N;
    long long int sum=0;
    cin>>N;
    
    for(int i=1;i<=N;i++)
    {
        long long int num;
        cin>>num;
        long long int fact=1;
        for(int j=1;j<=num;j++)
        {
            fact=fact*j%107;
        }
        sum=sum+fact;
    }
    
    cout<<sum;
	return 0;
}
