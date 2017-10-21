#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s = "ttxttxttxttxttxttx";

	s.insert(5,10,'!');

	cout << s << endl;

	return 0;
}