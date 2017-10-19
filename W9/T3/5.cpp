#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){


	string s("abcdeabcde");
	string t;
	cin >> t;

	cout << s.find(t) << endl;

	return 0;
}