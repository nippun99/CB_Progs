#include<bits/stdc++.h>
using namespace std;
void per(string a,int i,string c){
	if(a[i]=='\0'){
		if(a<c){
			cout<<a<<endl;
		}
		return;
	}
	
	for(int j=i;a[j]!='\0';j++){
		swap(a[i],a[j]);
		per(a,i+1,c);
//		swap(a[i],a[j]);
	}


}

int main() {
	string a;
	string c;
	//cin.getline(a,100);
	cin>>a;
	c=a;
	per(a,0,c);
	
	return 0;
}

