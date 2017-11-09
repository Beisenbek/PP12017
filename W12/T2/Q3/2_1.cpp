#include <iostream>
#include <sstream>

using namespace std;


int main(){

	stringstream ss;
	string s,best;

	getline(cin,s);
	ss << s;


	while(ss >> s){
		if(best.size() < s.size()){
			best = s;
		}
	}

	cout << best << " " << best.size() << endl;

	return 0;
}