#include <iostream>

using namespace std;

int main(){

	string s("hello world!");
	string t;
	getline(cin,t);

	s.insert(3,t);	

	cout << s << endl;
	
	return 0;
}