#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	string s("xabcabcabcabcabc");
	string t = "123";
	s.append(t);

	cout << s << endl;

	return 0;
}
