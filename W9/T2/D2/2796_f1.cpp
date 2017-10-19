#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int f1(string x, int i){
	int j = i + 1;

	while(x[i] == x[j]){
		j++;
	}	

	return j - i;
}

int main(){

	string s;
	cin >> s;

	cout << f1(s,0) << endl;

	return 0;
}