#include <iostream>
using namespace std;

void toh(int n,char source,char helper,char destination){
	if(n==0){
		return;
	}
	//Recursive Case
	toh(n-1,source,destination,helper);
	cout<<"Taking disk "<<n<<" from "<<source<<" to "<<destination<<endl;
	toh(n-1,helper,source,destination);	
}


int main(){

	toh(3,'A','B','C');
	return 0; 
}
