#include <iostream>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	stringstream ss;

	string t("100");

	ss << t;

	double x;

	ss >> x;

	cout << sqrt(x);


	return 0;
}
