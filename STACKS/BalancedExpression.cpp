//balanced brackets
#include<bits/stdc++.h>
#include<stack>
using namespace std;
bool IsBalanced(char *a){
	stack<char> s;
	
	for(int i=0;a[i]!='\0';i++){
		char ch=a[i];
		switch(ch){
			case'{':
			case'(':
			case'[':
				s.push(ch);
				break;
			case'}':
				if(!s.empty() && s.top()=='{')
					s.pop();
				else
					return false;
				break;
			case')':
				if(!s.empty() && s.top()=='(')
					s.pop();
				else
					return false;
				break;
			case']':
				if(!s.empty() && s.top()=='[')
					s.pop();
				else
					return false;
				break;
				
		}
	}
if(s.empty()==true){
	return true;
}	
else{
	return false;
}
	
	
}

int main() {
	char a[]="{a+(b+c)*d+e*[f+g]}";
	if(IsBalanced(a)){
		cout<<"Balanced";
	}
	else{
		cout<<"Not Balanced";
	}
	return 0;
}

