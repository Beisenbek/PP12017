#include <iostream>
#include <set>

using namespace std;


int main(){

	set<int> a;

	for(int i = 10; i>=1; --i){
		a.insert(i);
	}

	set<int>::iterator it;

	for(it = a.begin(); it != a.end(); ++it){
		cout << *it << endl;
	}

	return 0;
}