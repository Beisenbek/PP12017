#include <iostream>

using namespace std;

bool isPal(string s){
	bool res = true;

	for(int i = 0; i < s.size()/2; ++i){
		if(s[i] != s[s.size() - 1 - i]){
			res = false;
			break;
		}
	}

	return res;
}

int main(){

	string s;
	getline(cin,s);
	string x = "";

	for(int len = 1; len <= s.size(); ++len){
		for(int i = 0; i <= s.size() - len; ++i){
			string t = s.substr(i,len);
			if(isPal(t) && x.size() < t.size()){
				x = t;
			}
		}
	}

	cout << x << endl;
	
	return 0;
}
