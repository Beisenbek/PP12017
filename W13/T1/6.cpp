#include <map>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int main(){

	int x;
	map<int,int> m;

	for(int i = 10; i >=0 ; --i){
		m[i] = i * i;
	}

	map<int,int>::iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}

	return 0;

}
