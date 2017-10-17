#include <iostream>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	
	string s;
	string w = "";

	while(cin >> s){
		if(w.size() < s.size()){
			w = s;
		}
	}

	cout << w << "\n" << w.size() << "\n";

	return 0;
}
