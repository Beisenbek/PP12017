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
		cout << (*it).first << ": " << (*it).second << endl;
	}	


	return 0;
}
