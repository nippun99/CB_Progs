#include<bits/stdc++.h>
using namespace std;
class Vector{
	public:
		int *arr;
		int ms; //max size
		int cs; //current size
		Vector(int s=2){
			cs=0;
			ms=s;
			arr= new int[ms];
		}
		void push_back(int data){
			if(cs==ms){
				int *oldarr=arr;
				int oldms=ms;
				arr=new int[2*ms];
				ms=ms*2;
				for(int i=0;i<oldms;i++){
					arr[i]=oldarr[i];
				}
			}
			arr[cs++]=data;
		}
		void pop_back(){
			if(cs>0){
				cs--;
			}
			
		}
		int capacity(){
			return ms;
		}
		int size(){
			return cs;
		}
		bool empty(){
			return cs==0;
		}
		int operator[](int i){
			return arr[i];
		}

		
		
};
int main() {
	vector<int> v;
	for(int i=0;i<5;i++){
		v.push_back(i);
	}
	
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}

