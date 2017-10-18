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

	if(t.find(s) != string::npos){
		cout << "yes";
	}else{
		cout << "no";
	}


  return 0;
}