#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s,s2;
	double d;
	stringstream ss;

	cin >> s >> s2;
	ss << s << "1" <<s2;
	ss >> d;

	cout << d << endl;

	return 0;
}