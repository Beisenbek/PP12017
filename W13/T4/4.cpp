#include <iostream>
#include <map>

using namespace std;

int main(){

	map<char,int> m;
	map<char,int>::iterator it;
	string s = "";

	for(int i = 0; i <= 25; ++i){
		m[char(65 + i)] = 65 + i;
	}
	
	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}

	return 0;
}
