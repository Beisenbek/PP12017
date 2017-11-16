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

	m["Stepnogorsk"] = "Akmolinskaya";
	m["Atbasar"] = "Akmolinskaya";
	m["Shalkar"] = "Aktubinskaya";
	m["Shu"] = "Zhambilskaya";

	pair<string,string> p2 = make_pair("Talgar","Almatinskaya");
	m.insert(make_pair("Kaskelen","Almatinskaya"));
	m.insert(p2);

	for(it = m.begin(); it != m.end(); ++it){
		pair<string,string> p = *it;
		cout << p.first << " " << p.second << endl;
	}	

	
	return 0;
}
