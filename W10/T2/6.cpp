#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

string s;

bool f(int r, int l){
	if(r >= l) return true;	
	if(s[r] == s[l]){
		return f(r + 1, l - 1);
	}
	return false;
}

int main (){
	
	cin >> s;

	if(f(0,s.size()-1)){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}

	return 0;
}
