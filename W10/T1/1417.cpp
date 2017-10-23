#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

string f(string s, int a, int b){
	string res;

	for(int i = 0; i < a; ++i){
		res = res + s[i];
	}

	for(int i = b; i >= a; --i){
		res = res + s[i];
	}

	for(int i = b + 1; i < s.size(); ++i){
		res = res + s[i];
	}

	return res;
}

int main (){

	string s;
	int a,b;

	getline(cin,s);
	cin >> a >> b;

	s = f(s,a-1,b-1);

	cout << s << endl;

	return 0;
}
