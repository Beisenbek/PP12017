#include <iostream>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){
	string str("abcd");

	char t = 'a';

	str.append(10,t);
	

	cout << str;

	return 0;
}
