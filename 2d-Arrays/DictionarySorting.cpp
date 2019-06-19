#include<iostream>
#include <cstring>
using namespace std;

void Sort(char a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			for(int k=0;a[j][k]!='\0' && a[j+1][k]!='\0';k++){
				if(a[j][k]>a[j+1][k]){
					char temp[100];
					strcpy(temp,a[j]);
					strcpy(a[j],a[j+1]);
					strcpy(a[j+1],temp);
					break;					
				}
				if(a[j][k]<a[j+1][k]){
					break;
				}
				
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;	
	}	
}
int main(){
	char a[50][100];
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		cin.getline(a[i],100);	
	}
	Sort(a,n);
	return 0;
}
