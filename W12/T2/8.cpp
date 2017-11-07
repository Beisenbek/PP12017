//Standard Template Library

#include <iostream>
#include <set>

using namespace std;


int main(){

	set<int> a;
	
	for(int i = 10; i >=0; --i){
		a.insert(i);
	}

	cout << a.size()<< endl;

	for(set<int>::iterator it = a.begin(); it != a.end(); ++it){
		cout << *it << endl;
	}
	

	return 0;
}

