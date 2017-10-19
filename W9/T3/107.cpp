#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s;
	getline(cin,s);

	stringstream ss;
	ss << s;

	string x;
	string res = "";

	while(ss >> x){
		if(res.size() < x.size()){
			res = x;
		}
	}

	cout << res << endl << res.size() << endl;


	return 0;
}