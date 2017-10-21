#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	stringstream buffer;
	string s,t,r;
	double x;
	getline(cin,s);
	
	buffer << s;	
	buffer >> t >> x >> r;

	cout << t << endl;
	cout << r << endl;
	cout << sqrt(x) << endl;


	return 0;
}
