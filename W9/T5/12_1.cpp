#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	string s;
	string t;

	getline(cin,s);
	getline(cin,t);

	size_t k = s.find(t);

	if(k != string::npos){
		s.erase(k,t.size());
	}

	cout << s << endl;

	return 0;
}
