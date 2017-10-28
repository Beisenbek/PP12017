#include <iostream>
#include <map>

using namespace std;

string s;

bool isPal(int r,int l){
	if(r >= l) return true;
	if(s[r] == s[l]) return isPal(r+1,l-1);
	return false;
}

int main(){

	getline(cin,s);

	if(isPal(0,s.size()-1)){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}

	return 0;
}