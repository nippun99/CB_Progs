#include<bits/stdc++.h>
using namespace std;
void per(char *a,int i,int n,char *c){
	if(a[i]=='\0'){
		for(int l=0;l<n;l++){
			if(a[l]>c[l]){
				cout<<a<<endl;
				break;
			}
		}
	}
	
	for(int j=i;j<n;j++){
		swap(a[i],a[j]);
		per(a,i+1,n,c);
		swap(a[i],a[j]);
	}


}

int main() {
	char a[100];
	char c[100];
	strcpy(c,a);
	cin.getline(a,100);
	int n=strlen(a);
	per(a,0,n,c);
	return 0;
}

