#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	string s;
	cin >> s;

	double x = 0;

	//100 = 1 * 10 ^ 2 + 0 * 10 ^ 1 + 0 * 10 ^ 0 = 100

	for(int i = 0; i < s.size(); ++i){
		int y = s[i] - 48;
		x = x + y * pow(10,s.size()-1-i);
	}

	cout << sqrt(x) << endl;

	return 0;
}
