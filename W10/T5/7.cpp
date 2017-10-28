#include <iostream>

using namespace std;

bool isPal(string s, int l, int r){
	if(r >= l) return true;
	if(s[l] == s[r]){
		return isPal(s,l-1,r+1);
	}
	return false;
}

int main(){

	string s;
	getline(cin,s);
	cout << isPal(s,s.size()-1,0);
	
	return 0;
}
