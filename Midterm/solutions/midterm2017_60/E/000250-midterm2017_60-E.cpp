#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main (){
	string s, d;
	cin >> s;
	d = s;
	
	for (int i = s.size()-1;i>=0;i--){
		d[s.size()-1-i]=s[i];
	}
	if (d == s){
		cout <<"yes";
	}
	if (d != s){
		cout <<"no";
	}
	return 0;
}
