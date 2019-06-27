#include<bits/stdc++.h>
using namespace std;
string ans[100];
int ct=0;
void per(char *a,int i,int n,char *c){
	if(a[i]=='\0'){
		for(int l=0;l<n;l++){
			if(a[l]<c[l]){
				ans[ct++]=a;
				break;
			}
			if(a[l]>c[l]){
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
	//cin.getline(a,100);
	cin>>a;
	strcpy(c,a);
	int n=strlen(a);
	per(a,0,n,c);
	sort(ans,ans+ct);
	for(int j=0;j<ct;j++){
		cout<<ans[j]<<endl;
	}
	
	return 0;
}

