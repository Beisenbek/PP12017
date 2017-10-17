#include <iostream>

using namespace std;

int main(){

	string s("hello world!");

	int n = s.size();
	s.erase(n-3,3);	
	cout << s;
	return 0;
}