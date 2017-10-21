#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s,t;
	getline(cin,s);

	s = s + " ";
	int k = 0;

	string winner = "";

	for(int i = 0; i < s.size(); ++i){
		if(s[i] == ' '){
			t = s.substr(k,i - k);
			if(t.size() > winner.size()){
				winner = t;
			}
			k = i + 1;
		}
	}

	cout << winner << endl << winner.size() << endl;

	return 0;
}