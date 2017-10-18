#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <sstream>

using namespace std;

int main (){

	string s;
	getline(cin,s);

	int a[26];

	for(int i = 0; i < 26; ++i){
		a[i] = 0;
	}

	for(int i = 0; i < s.size(); ++i){
		int k = s[i]-'a';
		a[k]++;
	}

	for(int i = 0; i < 26; ++i){
		if(a[i] == 2){
			char c = char('a' + i);
			cout << c << endl;
			break;
		}
	}

    return 0;
}