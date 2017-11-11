#include <set>
#include <iostream>

using namespace std;


int main(){

	set<int> s;
	int x;
	
	for(int i = 0; i < 5; ++i){
		cin >> x;
		s.insert(x);
	}

	set<int>::iterator it;

	for(it = s.begin(); it != s.end(); ++it){
		cout << * it << endl;		
	}

	return 0;
}