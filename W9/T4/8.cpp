#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s = "ttxttxttxttxttxttx";
	string t = "ttx";
	size_t pos = 0;

	while(pos != string::npos){
		pos = s.find(t,pos);
		if(pos != string::npos){
			cout << pos << endl;
			pos = pos + 1;
		}
	}
	

	return 0;
}