#include <iostream>

using namespace std;

void isPal(string s){
	bool res = true;

	for(int i = 0; i < s.size()/2; ++i){
		if(s[i] != s[s.size() - 1 - i]){
			res = false;
			break;
		}
	}

	if(res == true){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
}

int main(){

	string s;
	cin >> s;

	isPal(s);

	return 0;
}
