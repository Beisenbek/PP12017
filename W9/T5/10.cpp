#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	string s("xabcabcabcabcabc");
	string t("abc");

	s.insert(1,t);

	cout << s << endl;

	return 0;
}
