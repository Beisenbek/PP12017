#include <iostream>
#include <map>

using namespace std;

int main(){

	map<int,int> m;

	int x;
	while(cin >> x){
		m[x]++;
	}

	map<int,int>::iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		pair<int,int> p = *it;
		cout << p.first << " " << p.second << endl;
	}


	return 0;
}
