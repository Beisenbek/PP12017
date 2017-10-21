#include <iostream>
#include <sstream>

using namespace std;

int main(){

	string s;
	getline(cin,s);

	cout << s.size() << " " << s.length() << endl;

	return 0;
}