#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){


	string s;
	getline(cin,s);

	cout << s << endl << s.substr(2,4) << endl;
	

	return 0;
}