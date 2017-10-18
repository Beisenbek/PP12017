#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <sstream>

using namespace std;

int main (){

	string s;
	bool found = false;
	getline(cin,s);

	for(int i = 0; i < s.size(); ++i){
		for(int j = i - 1; j >= 0; --j){
			if(s[i] == s[j]){
				cout << s[i] << endl;
				found = true;
				break;
			}
		}
		if(found){
			break;
		}
	}

    return 0;
}