#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s("test");
	int n = s.size();
	
	char c[n];

	s.copy(c,n,0);

	c[n] = '\0';

	string t;

	for(int i = 0; i < n; ++i){
		//t.append(1,c[i]);
		//t = t + c[i];
		t.push_back(c[i]);
	}

	cout << t << endl;
	return 0;
}