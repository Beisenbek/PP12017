#include <iostream>

using namespace std;


int main(){

	string s,best;

	while(cin >> s){
		if(best.size() < s.size()){
			best = s;
		}
	}

	cout << best << " " << best.size() << endl;

	return 0;
}