#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	map<string,string> m;

	m["Stepnogorsk"] = "Akmolinskaya";
	m["Atbasar"] = "Akmolinskaya";
	m["Shalkar"] = "Aktubinskaya";
	m["Shu"] = "Zhambilskaya";

	map<string, string>:: iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		string key = (*it).first;
		string value = m[key];
		cout << key << ": " << value << endl;
	}	


	return 0;
}
