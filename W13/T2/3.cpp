#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	map<string,string> m;
	map<string, string>:: iterator it;
	set<string>::iterator it2;
	set<string> v;

	m["Stepnogorsk"] = "Akmolinskaya";
	m["Atbasar"] = "Akmolinskaya";
	m["Shalkar"] = "Aktubinskaya";
	m["Shu"] = "Zhambilskaya";


	for(it = m.begin(); it != m.end(); ++it){
		string key = (*it).first;
		string value = m[key];
		v.insert(value);
	}	

	for(it2 = v.begin(); it2 != v.end(); ++it2){
		string obl = *it2;
		cout << obl << ": ";
		for(it = m.begin(); it != m.end(); ++it){
			string key = (*it).first;
			string value = m[key];
			if(value == obl){
				cout << key << " ";
			}
		}	
		cout << endl;
	}

	return 0;
}
