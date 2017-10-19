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

	for(int i = 0; i < n; ++i){
		c[i] = s[i];
	}

	c[n] = '\0';

	cout << c << endl;

	return 0;
}