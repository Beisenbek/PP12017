#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <sstream>

using namespace std;

int main (){

	stringstream ss;
	string str = "100";
	double x;

	ss << str;
	ss >> x;

	cout << sqrt(x);


  return 0;
}