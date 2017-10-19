#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){


	string s("aaaaaaa");
	string y;
	cin >> y;

	for(int i = 0; i <= s.size() - y.size(); ++i){
		size_t x = s.find(y,i);
		if(x != string::npos){
			cout << x << endl;
			i = x;
		}
	}

	return 0;
}