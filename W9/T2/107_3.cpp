#include <iostream>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
	
	string s;

	getline(cin,s);

	stringstream ss;

	ss << s;

	string t;

	string w = "";

	while(ss >> t){
		if(w.size() < t.size()){
			w = t;
		}
	}

	cout << w << "\n" << w.size() << "\n";

	return 0;
}
