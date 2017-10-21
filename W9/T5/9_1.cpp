#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	string s;
	string t;

	cin >>s >> t;

	if(s.find(t) == string::npos){
		cout << "not found!" << endl;
	}else{
		cout << "found!" << endl;
	}

	return 0;
}
