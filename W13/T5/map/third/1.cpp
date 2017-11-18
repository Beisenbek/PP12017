#include <iostream>
#include <map>

using namespace std;

int main(){

	map<string,double> m;

	m["A"] = 6;
	m["B"] = 6.5;
	m["A"] = 7;

	map<string,double>::iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}
	
	return 0;
}
