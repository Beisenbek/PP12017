#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

bool f(int r, int l,string s){
	
	if(r >= l) 		 return true;	
	if(s[r] == ' ')  return f(r + 1,l,s);
	if(s[l] == ' ')  return f(r,l - 1,s);
	if(s[r] == s[l]) return f(r + 1, l - 1,s);
	
	return false;
}

int main (){
	
	string s;
	getline(cin,s);

	if(f(0,s.size()-1,s)){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}

	return 0;
}
