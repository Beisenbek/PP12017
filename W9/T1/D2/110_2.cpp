#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <sstream>

using namespace std;

int main (){

	string s,t;
	cin >> s >> t;

	int n = s.size();
	int m = t.size();

	bool found = false;

	for(int i = 0; i <= m - n; ++i){
		//cout << t.substr(i,n) << endl; 
		if(s == t.substr(i,n)){
			cout << "yes";
			found = true;
			break;
		}
	}
	if(found == false){
		cout << "no";
	}

  return 0;
}