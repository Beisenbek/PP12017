#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string t = "123";
	char x = 'a';

	t.append(100,x);

	cout << t << endl;

	return 0;
}