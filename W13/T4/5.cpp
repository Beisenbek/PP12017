#include <iostream>
#include <map>

using namespace std;

int main(){

	map<char,int> m;
	string s = "";

	for(int i = 0; i <= 25; ++i){
		m[char(65 + i)] = 65 + i;
	}
	
	for(int i = 0; i <= 25; ++i){
		char key = char(65 + i);
		cout << key << " "<< m[key] << endl;
	}

	return 0;
}
