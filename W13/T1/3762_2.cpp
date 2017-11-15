#include <map>
#include <vector>
#include <set>
#include <iostream>
#include <climits>

using namespace std;

int main(){

	string x;
	map<string,int> m;

	while(cin >> x){
		m[x]++;
	}

	string winner;
	int mval = INT_MIN;

	map<string,int>::iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		if(mval < (*it).second){
			mval = (*it).second;
			winner = (*it).first;
		}
	}

	cout << winner << endl;

	return 0;
}
