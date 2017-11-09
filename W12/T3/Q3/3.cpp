#include <iostream>

using namespace std;

bool f(string s){
	bool res = true;

	for(int i = 1; i < s.size(); ++i){
		if(s[i] != s[i-1]){
			res = false;
			break;
		}
	}

	return res;
}

int main(){

	int n;
	cin >> n;
	string s;
	string best;

	for(int i = 0; i < n; ++i){
		cin >> s;
		if(f(s) == true){
			if(best.size() < s.size()){
				best = s;
			}
		}
	}

	cout << best.size() << endl;
	
	return 0;
}