#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	stringstream ss;
	double x;
	string s;

	cin >> s;

	ss << s;
	ss >> x;

	cout << sqrt(x) << endl;

	return 0;
}
