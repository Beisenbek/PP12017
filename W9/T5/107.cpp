#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	string line,t;
	getline(cin,line);

	stringstream x;
	x << line;

	string winner = "";
	
	while(x >> t){
		if(winner.size() < t.size()){
			winner = t;
		}
	}	 

	cout << winner << "\n" << winner.size() << "\n";

	return 0;
}
