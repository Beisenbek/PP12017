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
	bool ok = false;

	for(int len = s.size(); len >=1;  --len){
		for(int i = 0; i <= s.size() - len; ++i){
			string t = s.substr(i,len);
			if(isPal(t)){
				ok = true;
				cout << t << endl;
				break;
			}
		}
		if(ok == true) break;
	}

	return 0;
}
