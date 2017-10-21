#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);


	string line;
	getline(cin,line);
	int n = atoi(line.c_str());

	string s[n];

	for(int i = 0; i < n; ++i){
		getline(cin,s[i]);
	}

	for(int i = 0; i < n; ++i){
		cout << s[i] << endl;
	}
	
	return 0;
}





