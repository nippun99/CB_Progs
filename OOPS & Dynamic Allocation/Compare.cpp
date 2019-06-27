#include<bits/stdc++.h>
using namespace std;
class pairs{
	public:
		int x;
		int y;
		pairs(int a,int b){
			x=a;
			y=b;
		}
		
		bool operator>(pairs X){
			if(X.x<x && X.y<y){
				return true;
			}
			else{
				return false;
			}
			
		}
};

int main() {
	pairs p1(10,20);
	pairs p2(15,30);
	if( p1>p2){
		cout<<"true";	
	}
	else{
		cout<<"false";
	}
	return 0;
}

