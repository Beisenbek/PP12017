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

	size_t x = s.find(t,3);

	if( x != string::npos){
		cout << x << endl;
	}else{
		cout << "no" << endl;
	}

	return 0;
}