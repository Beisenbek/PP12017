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
		cout << (*it).first << " " << (*it).second << endl;
	}


	return 0;
}
