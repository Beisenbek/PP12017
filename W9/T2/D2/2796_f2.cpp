#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

string f2(int cnt, char c, string a){

	stringstream ss;
	string g;
	ss << cnt;
	ss >> g;
	a = a + g + c;
	return a;
}

int main(){

	string s = "";

	cout << f2(1123123,'t',s) << endl;

	return 0;
}