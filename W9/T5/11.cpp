#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	string s("xabcabcabcabcabc");
	s.append(10,'!');

	cout << s << endl;

	return 0;
}
