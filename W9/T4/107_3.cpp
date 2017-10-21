#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	string t,winner = "";

	while(cin >> t){
		if(winner.size() < t.size()){
			winner = t;
		}
	}

	cout << winner << endl << winner.size() << endl;

	return 0;
}