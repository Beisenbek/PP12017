#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	string line,winner = "";
	getline(cin,line);
	line = line + ' ';

	int k = 0;
	int n = line.size();

	for(int i = 0; i < n; ++i){
		if(line[i] == ' '){
			string t = line.substr(k,i-k);
			if(t.size() > winner.size()){
				winner = t;
			}
			k = i + 1;
		}
	}

	cout << winner << "\n" << winner.size() << "\n";
	
	return 0;
}
