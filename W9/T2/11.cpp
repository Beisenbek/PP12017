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

	t.copy(c,n,5);

	cout << c;

	return 0;
}
