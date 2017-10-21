#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	stringstream ss;
	string s = "100";

	ss << s;

	double x;

	ss >> x;

	cout<< sqrt(x) << endl;


	return 0;
}