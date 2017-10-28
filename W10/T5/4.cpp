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

	string t;
	getline(cin,t);
	int n = stoi(t);

	string s;
	for(int i = 0; i < n; ++i){
		getline(cin,s);
		bool x = isPal(s);
		if(x){
			cout << "OK\n";
		}else{
			cout << "NO\n";
		}
	}


	return 0;
}