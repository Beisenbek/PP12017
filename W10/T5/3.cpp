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
	cin >> s;

	if(isPal(s)){
		cout << "YES";
	}else{
		cout << "NO";
	}


	return 0;
}