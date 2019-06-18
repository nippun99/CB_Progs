#include<iostream>
using namespace std;
int main(){
	int a;
	char ch[100];
	cin>>a;
	cin.ignore();//we need to ignore te \n an ' ' 
	cin.getline(ch,100);
	cout<<a<<endl;
	cout<<ch<<endl; 
}
