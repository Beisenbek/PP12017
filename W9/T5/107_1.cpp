#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	string t;
	string winner = "";
	
	while(cin >> t){
		if(winner.size() < t.size()){
			winner = t;
		}
	}	 

	cout << winner << "\n" << winner.size() << "\n";

	return 0;
}
