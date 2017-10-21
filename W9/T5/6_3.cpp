#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	string s;
	cin >> s;

	double x = atof(s.c_str());

	cout << sqrt(x) << endl;

	return 0;
}
