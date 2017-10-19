#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s("test");
	int n = s.size();
	
	char c[n];

	s.copy(c,n,0);

	c[n] = '\0';

	cout << c << endl;

	return 0;
}