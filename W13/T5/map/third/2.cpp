#include <iostream>
#include <map>

using namespace std;

int main(){

	map<string,double> m;

	pair<string, double> p1 = make_pair("A",6);
	pair<string, double> p2 = make_pair("B",6.5);
	pair<string, double> p3 = make_pair("A",7);

	m.insert(p1);
	m.insert(p2);
	m.insert(p3);

	map<string,double>::iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}
	
	return 0;
}
