#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
	unordered_map<string,int> h;
	pair<string,int> p("Mango",100);
	cout<<p.first<<endl;
	cout<<p.second<<endl;
	
	h.insert(p);
	
	//or
	h.insert(make_pair("Apple",150));
	h.insert(make_pair("Pineapple",30));
	h.insert(make_pair("Guava",60));
	//or
	h["Kiwi"]=50; //insertion
	
	cout<<h["Mango"]<<endl;
	
	if(h.count("Mango")){
		cout<<"YES"<<endl;
	}
	if(!h.count("fdsjklskd")){
		cout<<"NO"<<endl;
	}
	
	//for each
	for(auto node:h){
		cout<<node.first<<"-->"<<node.second<<endl;
	}
	
	
	return 0;
}

