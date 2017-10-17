#include <iostream>

using namespace std;

int main(){

	string s("hello world!");

	int n = s.size();
	s.insert(3,"abcd");	
	cout << s;
	return 0;
}