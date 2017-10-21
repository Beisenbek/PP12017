#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s = "ttxttxttxttxttxttx";

	s.erase(1,1);

	cout << s << endl;

	return 0;
}