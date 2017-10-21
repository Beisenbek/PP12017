#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	string s("xabcabc");
	string t;
	cin >> t;

	size_t x = s.find(t);

	if(x == string::npos){
		cout << "not found" << endl;
		cout << x << endl;
	}else{
		cout << x << endl;
	}

	return 0;
}
