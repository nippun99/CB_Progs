//OOPS
#include<bits/stdc++.h>
using namespace std;
//Classssss
class Car{
	private:
		int price;
	public:
		char name[100];

		int seats;
		int model;
		void Print(){
//			cout<<price<<endl;
			cout<<seats<<endl;
			cout<<name<<endl;
			cout<<model<<endl;
		}
		void SetPrice(int p){
			price=p;
		}
		int Getprice(){
			return price;
		}
		
}; 


int main(){
	Car a;//object :a
	a.SetPrice(1234);
	a.seats=2;
	strcpy(a.name,"BMW");
	a.model=4;
	
	Car b;//object b
	b.SetPrice(122323434);
	b.seats=5;
	strcpy(b.name,"Audi");
	b.model=8;
	
	a.Print();
	cout<<a.Getprice();
	cout<<endl;
	b.Print();
	cout<<b.Getprice();	
	return 0;
}
