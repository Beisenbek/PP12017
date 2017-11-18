#include <iostream>
#include <map>

using namespace std;

int main(){

	map<string,int> m;
	map<string,int>::iterator it;

	m["A"] = 12;
	m["Z"] = 20;
	m["U"] = 30;
	m["A1"] = 20;

	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}

	return 0;
}
