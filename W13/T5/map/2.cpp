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
		int key = (*it).first;
		int value = (*it).second;
		cout << key << " " << value << endl;
	}


	return 0;
}
