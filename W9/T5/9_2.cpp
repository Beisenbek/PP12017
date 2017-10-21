#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	string s("xabcabcabcabcabc");
	string t("abc");

	size_t x = s.rfind(t);

	if(x == string::npos){
		cout << "not found" << endl;
	}else{
		cout << x << endl;
	}

	return 0;
}
