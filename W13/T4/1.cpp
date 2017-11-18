#include <iostream>
#include <map>

using namespace std;

int main(){

	map<string,int> m;

	m["A"] = 12;
	m["Z"] = 20;

	pair<string,int> p;
	p = make_pair("U",30);

	m.insert(p);

	pair<string,int> p2;
	p2.first = "A";
	p2.second = 20;
	m.insert(p2);
	
	m["A"] = 20;


	map<string,int>::iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		pair<string,int> t = *it;
		cout << t.first << " " << t.second << endl;
	}


	return 0;
}