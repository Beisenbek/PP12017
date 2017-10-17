#include <iostream>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <string>
#include <stdio.h>

using namespace std;

int main(){

	string t("kbtu university!");

	int n = t.size();

	char c[n];

	t.copy(c,n,0);

	c[3] = '\0';

	cout << c;

	return 0;
}
