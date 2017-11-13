#include <map>
#include <iostream>

using namespace std;

int main(){

	map<string, int> m;

	m["Astana"] = 1006570;	
	m["Almaty"] = 1772779;	
	m["Shymkent"] = 932415;	
	m["Uralsk"] = 233932;

	map<string,int>::iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		string key = (*it).first;
		cout << key << ": " << m[key] << endl;		
	}

	return 0;

}