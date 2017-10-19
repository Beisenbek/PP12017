#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){

	string s;
	cin >> s;

	int i = 0;
	int k = s.size() - 1;
	double n = 0;

	while(i < s.size()){
		n +=  (s[i]-'0') * pow(10,k);
		i++;
		k--;
	}

	cout << sqrt(n) << endl;

	return 0;
}